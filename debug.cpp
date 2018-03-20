#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <memory>

#define INULL INT_MIN

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
    char* Serialize(TreeNode *root) 
    {   
        string str = dfs(root);
		char* ret = new char[str.size() + 1];
		int i;
        for(i = 0; i < str.size(); i++)
		{
			ret[i] = str[i];
		}
		ret[i] = '\0'; 
        return ret;
    }
    TreeNode* Deserialize(char *str) 
    {
    	int i = 0;
    	return ddfs(str, i);
    }

    TreeNode* ddfs(char *str, int& i)
    {
    	if(str[i] == '#')
    	{
    		i = i + 2;
    		return nullptr;
    	}
    	int num = 0;
    	while(str[i] != '!')
    	{
    		num = num * 10 + str[i] - '0';
    		i++;
    	}
    	i++;
    	TreeNode* root = new TreeNode(num);
    	root->left = ddfs(str, i);
    	root->right = ddfs(str, i);
    	return root;
    }

    string dfs(TreeNode* root)
    {
        string str = "";
        if(root == NULL)
        {
            return string("#!");
        }
        str = str + to_string(root->val) + "!";
        str += dfs(root->left);
        str += dfs(root->right);
        return str;
    }
};
//对象初始化
ListNode* initListNode()
{
	vector<int> nums = {1, 2, 3};
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

TreeNode* initTree()
{
	vector<int> val = {1, 2, 3, INULL, 5};
	vector<TreeNode*> tVec(val.size());
	for(int i = 0; i < val.size(); i++)
	{
		if(val[i] == INULL)
		{
			tVec[i] = nullptr;
		}
		else
		{
			tVec[i] = new TreeNode(val[i]);
		}
	}
	for(int i = 0; i < tVec.size(); i++)
	{
		if(2 * i + 1 < tVec.size())
		{
			tVec[i]->left = tVec[2 * i + 1];
		}
		if(2 * i + 2 < tVec.size())
		{
			tVec[i]->right = tVec[2 * i + 2];
		}
	}
	return tVec[0];
}

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
	TreeNode* root = initTree();
	
	//链表输入
	//ListNode* head = initListNode();

	//矩阵输入
	//vector<vector<int>> nums = initMatrix(); 
	
	//计算
	char* str = Solution().Serialize(root);
	cout << str << endl;
	TreeNode* res = Solution().Deserialize(str);
	//链表输出
	//printListNode(res);
	
	//矩阵输出
	//printMatrix(nums);

	//数组输出
	//printArray(res);
	
	//树的中序输出
	printTree(res);

	return 0;
}