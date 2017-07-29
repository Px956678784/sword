class Solution {
public:
int TreeDepth(TreeNode* pRoot){
        if(!pRoot) return 0 ;
            return max(TreeDepth(pRoot->left)+1,TreeDepth(pRoot->right)+1);
    }
   
};