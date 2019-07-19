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
    vector <int> ret;
public:
    vector<int> postorder(Node* root) {
       if(root==NULL){
           return ret;
       }
       for(Node* visit :root->children){
           postorder(visit);
       }   
        ret.push_back(root->val);
        return ret;
    }
};