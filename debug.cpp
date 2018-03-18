#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;

//链表结点
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

//树结点
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    void test(void)
    {

    }
};

//对象初始化
ListNode* initListNode()
{
	vector<int> nums = {4, 5, 6, 1, 0};
	ListNode* p;
	ListNode* tail;
	ListNode* head = NULL;
	for(auto it : nums)
	{
		if(head == NULL)
		{
			head = new ListNode(it);
			tail = head;
		}
		else
		{
			p = new ListNode(it);
			tail->next = p;
			tail = p;
		}
		
	}
	return head;
}

vector<vector<int>> initMatrix()
{
	vector<int> tmp(3, 1);
	vector<vector<int>> res(3, tmp);
	return res;
}

/*
TreeNode* initTree()
{
	TreeNode* root;
	vector<int> node = {1};
	root = createTree(node, 0);
	return root;
}

TreeNode* createTree(vector<int>& node, int i)
{
	if(i >= node.size())
	{
		return NULL;
	}
	if(node[i] == -1)
	{
		return NULL;
	}
	root = new TreeNode(node[i]);
	root->left = createTree(node, i + 1);
	root->right = createTree(node, i + 2);
	return root;
}
*/
//输出
void printListNode(ListNode* res)
{
	while(res)
	{
		cout << res->val << " ";
		res = res->next;
	}
	cout << endl;
}

void printMatrix(vector<vector<int>>& res)
{
	for(auto row : res)
	{
		for(auto it : row)
		{
			cout << it << " ";
		}
		cout << endl;
	}
}

void printArray(vector<int>& res)
{
	for(auto it : res)
	{
		cout << it << " ";
	}
	cout << endl;
}

void printTree(TreeNode* root)
{
	if(root == NULL)
	{
		return;
	}
	printTree(root->left);
	cout << root->val << " ";
	printTree(root->right);
}

int main()
{
	//树输入
	//TreeNode* root = initTree();
	
	//链表输入
	//ListNode* head = initListNode();

	//矩阵输入
	//vector<vector<int>> nums = initMatrix(); 
	
	//计算
	Solution().test();

	//链表输出
	//printListNode(res);
	
	//矩阵输出
	printMatrix(nums);

	//数组输出
	//printArray(res);
	
	//树的中序输出
	//printTree(res);

	return 0;
}