class Solution {
public:
    bool isMirror(TreeNode* a, TreeNode* b){
        if(!a && !b) return true;
        if(!a || !b || a->val!=b->val) return false;
        return isMirror(a->left,b->right) && isMirror(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root){ return !root || isMirror(root->left, root->right); }
};
