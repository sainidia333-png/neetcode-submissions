

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)return true;
         if(p==NULL&&q!=NULL||q==NULL&&p!=NULL)return false;
        
            bool left=isSameTree(p->left,q->left);
            bool right=isSameTree(q->right,p->right);
        if(left&&right&&p->val==q->val)return true;
        return false;
    }
};
