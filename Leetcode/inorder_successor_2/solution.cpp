/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* inorderSuccessor(Node* node) {
        // the difference between two problems is, this one has reference to parents. so use that property.
        if (node == NULL) return nullptr;
        auto curr = node;
        // similar to reverse inorder traversal, start with right node
        if (curr->right) {
            curr = curr->right;
            while (curr->left) // if there are left node, then keep taking them and the leftmost node will be the answer.
                curr = curr->left;
            return curr;
        }

        // if the given node has no right node at all
        auto p = node;
        while(p->parent && p->parent->right == p) {
            cout<<p->parent->val<<" "<<p->parent->right->val<<" ";
            p = p->parent;
            cout<<p->val<<" ";
        }
        return p->parent;
    }
};
