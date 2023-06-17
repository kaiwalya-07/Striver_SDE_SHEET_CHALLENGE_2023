/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool dfs(BinaryTreeNode<int>*r1,BinaryTreeNode<int>*r2){
        //base condition
        if(r1==NULL) return r2==NULL;
        if(r2==NULL) return r1==NULL;


        if(r1->data==r2->data && dfs(r1->left,r2->right) && dfs(r1->right,r2->left)) return true;

        return false;
}


bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.  
    if(root==NULL) return true;
    BinaryTreeNode<int>*r1=root->left,*r2=root->right;
    

    bool flag= dfs(r1,r2);  

    return flag;
}
