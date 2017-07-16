class Solution {
    vector<int> temp;
    int sum=0;
    void find(vector<vector<int>> &a,TreeNode *root,int target){
        if(root==NULL) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right && sum==target)
        	a.push_back(temp);
        if(root->left)find(a,root->left,target);
        if(root->right)find(a,root->right,target);
        sum-=root->val;
        temp.pop_back();
    }
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> answer;
        if(root!=NULL && expectNumber!=0)
        	find(answer,root,expectNumber);
		return answer;
    }
};