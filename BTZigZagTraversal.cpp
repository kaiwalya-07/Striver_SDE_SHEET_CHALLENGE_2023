#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if(root==NULL) return ans;
    bool flag=true;

    queue<BinaryTreeNode<int>*> q;
    
    q.push(root);

    while(!q.empty()){
        
        int s=q.size();
        vector<int> v(s);
        for(int i=0;i<s;i++){
            BinaryTreeNode<int>*node=q.front();
            q.pop();
            
            
            int id=flag==true?i:s-i-1;
            v[id]=node->data;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
                        
        }

            ans.insert(ans.end(),v.begin(),v.end());
            flag=!flag;        
    }

    return ans;
}
