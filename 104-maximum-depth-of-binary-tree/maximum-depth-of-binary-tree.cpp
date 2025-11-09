class Solution {
public:
    int maxDepth(TreeNode* r){ return r? 1+max(maxDepth(r->left),maxDepth(r->right)) : 0; }
};
