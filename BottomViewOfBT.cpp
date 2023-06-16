#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int>ans;
    if(root==NULL) return ans;
    map<int,list<int>> m;

    queue<pair<BinaryTreeNode<int>*,int>>q;

    q.push({root,0});

    while(!q.empty()){
        auto temp=q.front();
        q.pop();

        BinaryTreeNode<int>*node=temp.first;
        int level=temp.second;

        m[level].push_front(node->data);

        if(node->left) q.push({node->left,level-1});
        if(node->right) q.push({node->right,level+1});
    }

    for(auto it:m){
        ans.push_back(it.second.front());
    }
  return ans;   
}
