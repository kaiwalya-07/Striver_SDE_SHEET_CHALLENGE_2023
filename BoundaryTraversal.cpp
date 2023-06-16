#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void left(TreeNode<int>*node,vector<int>&ans){
         if(node->left==NULL && node->right==NULL) return;

         ans.push_back(node->data);

         if(node->left) left(node->left,ans);
         else if(node->right) left(node->right,ans);
}


void leaves(TreeNode<int>*node,TreeNode<int>*root,vector<int>&ans){
       if(node->left==NULL && node->right==NULL && node!=root){
           ans.push_back(node->data);
           return;
       }

       if(node->left) leaves(node->left,root,ans);
       if(node->right) leaves(node->right,root,ans);       
}

void right(TreeNode<int>*node,vector<int>&ans,stack<TreeNode<int>*>&st){
         if(node->left==NULL && node->right==NULL) return;

         st.push(node);
         if(node->right) right(node->right,ans,st);
         else if(node->left) right(node->left,ans,st);
        
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.

    vector<int>ans;
    stack<TreeNode<int>*>st;
    if(root==NULL) return ans;

    ans.push_back(root->data);

    if(root->left) left(root->left,ans);
    leaves(root,root,ans);
    if(root->right) right(root->right,ans,st); 

    if(!st.empty()){
        while(!st.empty()){
            TreeNode<int>*t=st.top();
            st.pop();
            ans.push_back(t->data);
        }
    }   

  return ans;
}
