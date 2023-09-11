#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;

    TreeNode(int temp)
    {
        this->val = temp;
        this->left = this->right = NULL;
    }
};

int traverse(TreeNode *root)
{
    if (root == NULL)
        return 0;

    std::queue<TreeNode *> inox;
    inox.push(root);

    int count = 0;
    while (inox.size())
    {
        int size = inox.size();

        std::vector<int> temp2;
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            if (it->left)
                inox.push(it->left);
            if (it->right)
                inox.push(it->right);

            temp2.push_back(it->val);
        }

        std::map<int,int>data;        
        for(int i = 0;i<temp2.size();i++) data[temp2[i]] = i;  
        
        for (int i = 0; i < temp2.size(); i++)
        {
            auto it = data.begin();
            int val = it->first;
                        
            if (val != temp2[i])
            {
                int t1=val;
                int t2=temp2[i];
                
                count++;
                std::swap(temp2[data[val]], temp2[i]);
                        
                data[t2] = data[t1];
                data[t1] = i;
            }
            
            data.erase(data.begin());
        }
    }

    return count;
}

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(2);

    std::cout << traverse(root);
}