/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
   int HL,HR,MaxH;

    if(root){
        HL=maxDepth(root->left);
        HR=maxDepth(root->right);
        MaxH=HL>HR?HL:HR;
        return (MaxH+1);
    }
    return 0;
}