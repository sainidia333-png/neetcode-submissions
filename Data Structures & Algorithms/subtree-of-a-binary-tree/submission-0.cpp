

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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL&&subRoot==NULL)return true;
        if(subRoot==NULL&&root!=NULL)return true;
        if(subRoot!=NULL&&root==NULL)return false; 
        if (isSameTree(root,subRoot))return true;
        bool left=isSubtree(root->left,subRoot);
        bool right=isSubtree(root->right,subRoot);
        if(left||right)return true;
        return false;
    }
};
