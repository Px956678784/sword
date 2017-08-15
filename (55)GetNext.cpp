class Solution {
    TreeLinkNode* findleft(TreeLinkNode* pNode){
        if(pNode->left)
            return findleft(pNode->left);
        return pNode;
    }
    TreeLinkNode* findfather(TreeLinkNode* pNode){
        if(pNode->next){
        	if(pNode->next->left==pNode)
            	return pNode->next;
        	else
            	return findfather(pNode->next);
        }
        return NULL;
    }
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode){
        if(pNode==NULL)return NULL;
        if(pNode->right)
            return findleft(pNode->right);
        if(pNode->next){
        	if(pNode->next->left==pNode)
        		return pNode->next;
            else 
                return findfather(pNode->next);
        }
        return NULL;
    }
};