/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root){
    
     bool left =true,right =true;
    if(root){
        right=!root->right||root->val==root->right->val&&isUnivalTree(root->right);
        left=!root->left||root->val==root->left->val&&isUnivalTree(root->left);
    }
    return left&&right;
    

}

