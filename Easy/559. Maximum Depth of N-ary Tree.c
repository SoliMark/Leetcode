/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
private:
    
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        int depth = 0;
        for(Node * visit : root->children){
            depth = max(depth, maxDepth(visit));
        }
        
        return depth+1 ;
    }
};