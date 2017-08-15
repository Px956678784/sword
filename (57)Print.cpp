class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int>> tree;
        if(pRoot==NULL)return tree;
		stack<TreeNode *> stack1,stack2;
        stack1.push(pRoot);
        while(!stack1.empty() || !stack2.empty()){
            TreeNode* now;
        	vector<int> temp;
            if(!stack1.empty()){
                while(!stack1.empty()){
            		now=stack1.top();
            		temp.push_back(now->val);
            		stack1.pop();
            	    if(now->left)
            	        stack2.push(now->left);
            	    if(now->right)
            	        stack2.push(now->right);
                }
                tree.push_back(temp);
            }
            
            else if(!stack2.empty()){
                while(!stack2.empty()){
                	now=stack2.top();
            		temp.push_back(now->val);
            		stack2.pop();
            	    if(now->right)
            	        stack1.push(now->right);
           		    if(now->left)
           	        	stack1.push(now->left);
                }
                tree.push_back(temp);
            }
        }
        return tree;
    }
};