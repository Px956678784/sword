/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead->next==NULL || pHead->next->next==NULL)
            return NULL;
        ListNode *onestep=pHead,*twostep=pHead;
        while(twostep!=NULL && twostep->next!=NULL){
            onestep=onestep->next;
            twostep=twostep->next->next;
            if(onestep==twostep){
        		twostep=pHead;
        		while(onestep!=twostep){
           		 onestep=onestep->next;
           		 twostep=twostep->next;
        		}
                if(onestep==twostep)
                	return onestep;
        	}
        }
		return NULL;
    }
};