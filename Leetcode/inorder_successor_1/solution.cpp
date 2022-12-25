class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        
        //reversed inorder traversel
        stack<TreeNode*> st;
        recursive(root, st);
        while (st.top() != p and !st.empty()) st.pop();
        //now st.top will have the p node but we need p node's inorderSuccessor
        //so take that as well from stack
        st.pop();
        if (st.empty()) return NULL;
        // now p node's successor will be top node
        return st.top();

    }
    void recursive(TreeNode* root, stack<TreeNode*> &st) {
        if (!root)
            return;
        recursive(root->right, st);
        st.push(root);
        recursive(root->left, st);
    }
};
