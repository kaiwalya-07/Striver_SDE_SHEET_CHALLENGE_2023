#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

bool dfs(TreeNode<int>*root,vector<int>&ans,int x){

	if(root->data==x){
		ans.push_back(root->data);
		return true;
	}
	if(root->left==NULL && root->right==NULL) return false;

    bool r=false,l=false;

	if(root->left)  l=dfs(root->left,ans,x);
	if(root->right)  r=dfs(root->right,ans,x);

	if(r==true || l==true){
		ans.push_back(root->data);
		return true;
	}

	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.

	vector<int> ans;
	if(root==NULL) return ans;

	bool flag=dfs(root,ans,x);

	if(flag==true){
		reverse(ans.begin(),ans.end());
		return ans;
	}

    return ans;
}
