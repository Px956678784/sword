/*struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};*/

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
		vector<int> left_pre,left_vin,right_pre,right_vin;
        int pos=0;
        int length=vin.size();
        if(length==0)
            return NULL;
        TreeNode* root=new TreeNode(pre[0]);
		for(int i=0;i<length;i++){
            if(vin[i]==pre[0]){
                pos=i;
                break;
            }
        }
        for(int i=0;i<pos;i++){
            left_pre.push_back(pre[i+1]);
            left_vin.push_back(vin[i]);
        }
        for(int i=pos+1;i<length;i++){
            right_pre.push_back(pre[i]);
            right_vin.push_back(vin[i]);
        }
        root->left=reConstructBinaryTree(left_pre,left_vin);
        root->right=reConstructBinaryTree(right_pre,right_vin);
        return root;
        
    }
};