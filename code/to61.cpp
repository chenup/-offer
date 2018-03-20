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