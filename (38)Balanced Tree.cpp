
class Solution {
    bool judge(TreeNode *root,int &deep){
        if(!root)return true;
        int left=0,right=0;
        if(judge(root->left,left) && judge(root->right,right)){
            if(left-right<-1 || left-right>1)
                return false;
            deep=(left>right?left:right)+1;
            return true;
        }
        return false;
    }
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int deep=0;
        return judge(pRoot,deep);
    }
};