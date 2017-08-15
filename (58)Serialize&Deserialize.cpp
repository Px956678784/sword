class Solution {
	vector<int> answer;
    void dfs(TreeNode *root){
        if(root==NULL)
            answer.push_back(-1);
        else{
        	answer.push_back(root->val);
        	dfs(root->left);
        	dfs(root->right);
        }
    }
    TreeNode* dedfs(int* &p){
        if(*p==-1){
            p++;
            return NULL;
        }
        TreeNode* node=new TreeNode(*p);
        p++;
        node->left=dedfs(p);
        node->right=dedfs(p);
        return node;
        
    }
public:
    char* Serialize(TreeNode *root) {    
		answer.clear();
        dfs(root);
    	int* result=new int[answer.size()];
        for(int i=0;i<answer.size();i++)
            result[i]=answer[i];
        return (char*)result;
    }
    TreeNode* Deserialize(char *str) {
        int *trans=(int*)str;
        return dedfs(trans);
    }
};