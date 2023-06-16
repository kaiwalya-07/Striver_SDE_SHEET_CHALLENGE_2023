#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;

    if(root==NULL) return ans;

    queue<TreeNode<int>*> q;

    q.push(root);

    while(!q.empty()){
        int s=q.size();
        int ct=0;



        for(int i=0;i<s;i++){
           TreeNode<int>*node=q.front();
           q.pop();            
            if(ct<1){
              ans.push_back(node->data);
              ct++;
            }

          if(node->left) q.push(node->left);
          if(node->right) q.push(node->right);

        }


    }

    return ans;
    
}
