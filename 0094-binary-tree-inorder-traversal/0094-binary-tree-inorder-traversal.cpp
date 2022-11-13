class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int>vt;
        hepler(root, vt);
        return vt;

    }
    void hepler(TreeNode* root, vector<int>&vt)
    {
        if (root == nullptr) return;
            hepler(root->left,vt);
            vt.push_back(root->val);
            hepler(root->right,vt);
    }
};