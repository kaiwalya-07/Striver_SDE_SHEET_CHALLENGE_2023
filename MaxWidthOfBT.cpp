#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    int ans=INT_MIN,l=0;
    queue<TreeNode<int>*>q;
    if(root==NULL) return 0;
    q.push(root);

    while(!q.empty()){
        int l=q.size();
        ans=max(l,ans);

        for(int i=0;i<l;i++){
            auto node=q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }
    }

    return ans;
}
