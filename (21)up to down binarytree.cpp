#include<queue>
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> answer;
		if(root!=NULL){
			queue<TreeNode*> assistant;
			TreeNode *curr;
			assistant.push(root);
			while(!assistant.empty()){
				curr=assistant.front();
				assistant.pop();
				answer.push_back(curr->val);	
				if(curr->left!=NULL)assistant.push(curr->left);
				if(curr->right!=NULL)assistant.push(curr->right);
			}
        }
		return answer;
    }
};