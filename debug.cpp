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
    void test()
	{
		
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

//键盘输入数字矩阵
vector<vector<int>> kc_num_matrix(int m, int n)
{
	vector<vector<int>> res(m, vector<int>(n, 0));
	int k;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &k);
			res[i][j] = k;	
		}
	}
	for(auto it : res)
	{
		for(auto itt : it)
		{
			cout << itt << " ";
		}
		cout << endl;
	}
	return res;
}

//键盘输入字符矩阵
vector<vector<char>> kc_ch_matrix(int m, int n)
{
	vector<vector<char>> res(m, vector<char>(n, 0));
	char c;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> c;
			res[i][j] = c;	
		}
	}
	for(auto it : res)
	{
		for(auto itt : it)
		{
			cout << itt << " ";
		}
		cout << endl;
	}
	return res;
}

//键盘输入字符串数组
#define N 256
vector<string> kc_str_array(int n)
{
	vector<string> res;
	char str[N];
	//不带空格 
	/*
	for(int i = 0; i < n; i++)
	{
		scanf("%s", str);
		res.push_back(string(str));
	}
	*/
	//带空格
	gets(str);
	for(int i = 0; i < n; i++)
	{
		gets(str);
		res.push_back(string(str));
	}
	//
	cout << "#result#" << endl;
	for(auto buf : res)
	{
		cout << buf << endl;
	}
	return res;
}

//键盘输入 
void kb_cin()
{
	//将文件输入转为键盘输入 
	//freopen("data.in","r", stdin);
	int m, n;
	scanf("%d%d", &m, &n);
	kc_num_matrix(m, n); 
}

//初始化结构
void init()
{
	//树输入
	//TreeNode* root = initTree();
	
	//链表输入
	//ListNode* head = initListNode();

	//矩阵输入
	//vector<vector<int>> nums = initMatrix(); 
}

//标准输出 
void std_print()
{
	//链表输出
	//printListNode(res);
	
	//矩阵输出
	//printMatrix(nums);

	//数组输出
	//printArray(res);
	
	//树的中序输出
	//printTree(res);
}
int main()
{
	kb_cin();
	//init();
	//计算
	//Solution().test();
	//文件输出
	std_print();
	
	return 0;
}