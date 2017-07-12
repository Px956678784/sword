class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL || k==0) return NULL;
    	ListNode *curr1=pListHead,*curr2=pListHead;
        for(int i=1;i<k;i++){
            if(curr2->next!=NULL)
            	curr2=curr2->next;
            else
                return NULL;
        }
        while(curr2->next!=NULL){
          	curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr1;
    }
};