#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    
    vector<int> ans;
    if(root==NULL) return ans;

    queue<pair<TreeNode<int>*,int>>q;

     map<int,vector<int>>m;

     q.push({root,0});

     while(!q.empty()){

         auto temp=q.front();
         q.pop();
         TreeNode<int>*node=temp.first;
         int level=temp.second;
         m[level].push_back(node->val);

         if(node->left) q.push({node->left,level-1});
         if(node->right) q.push({node->right,level+1});

     }

     for(auto it:m){
         ans.push_back(it.second[0]);
     }

     return ans;
}
