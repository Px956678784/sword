/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
    void ConvertHelp(TreeNode* curr,TreeNode* &pre){
        if(curr==NULL)return;
        ConvertHelp(curr->left,pre);
        curr->left=pre;
        if(pre) pre->right=curr;
        pre=curr;
        ConvertHelp(curr->right,pre);
    }
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree==NULL) return NULL;
        TreeNode *pre=NULL;
        ConvertHelp(pRootOfTree,pre);
        TreeNode *NewHead=pRootOfTree;
        while(NewHead->left!=NULL)
            NewHead=NewHead->left;
        return NewHead;
    }
};