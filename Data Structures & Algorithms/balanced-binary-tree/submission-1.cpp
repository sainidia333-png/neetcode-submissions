
class Solution {
public:
int height(TreeNode* root){
    if(root==NULL)return 0;
    return 1+max(height(root->left),height(root->right));
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        //TreeNode* root=root;
        int lc=height(root->left);
        int rc=height(root->right);
        bool left = isBalanced(root->left);
       bool right = isBalanced(root->right);
        if(left&&right&&abs(lc-rc)<=1){
            return true;
        }
        return false;
    }
};
