#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int> ans;
    // if(root==NULL) return ans;

    map<int,map<int,vector<int>>> m;

    // queue<pair<TreeNode<int>*,pair<int,int>>>q;
    queue < pair < TreeNode<int> * , pair < int, int >>> q;
    // vert, hor

    q.push({root,{0,0}});

    while(!q.empty()){
         auto node=q.front();
         q.pop();
         TreeNode<int>*temp=node.first;

         int x=node.second.first,y=node.second.second;
         m[x][y].push_back(temp->data);

         if(temp->left) q.push({temp->left,{x-1,y+1}});
         if(temp->right) q.push({temp->right,{x+1,y+1}});
    }
 
    
    // for(auto it:m){
    //   for(auto p:it.second){
    //       ans.insert(ans.end(),p.second.begin(),p.second.end());
    //   }
    // }

       for(auto i:m){

       for(auto j:i.second){

           for(auto k:j.second){

               ans.push_back(k);

           }

       }

   }

    return ans;

}
