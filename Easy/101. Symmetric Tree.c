/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool cmpLR(struct TreeNode* L,struct TreeNode* R){
    if(!L&&!R) return true;
    if(!L||!R) return false;
    
    return L->val==R->val&&cmpLR(L->left,R->right)&&cmpLR(L->right,R->left);
    
}

bool isSymmetric(struct TreeNode* root){
    if(root==NULL) return true;
    return cmpLR(root->left,root->right);
}

