/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
         ListNode *pHeadcombined=NULL;
        if(pHead1==NULL)
        	return pHead2;
        else if(pHead2==NULL)
              return pHead1;
        else if(pHead1->val<pHead2->val){
            pHeadcombined=pHead1;
            pHeadcombined->next=Merge(pHead1->next,pHead2);
        }
        else{
            pHeadcombined=pHead2;
            pHeadcombined->next=Merge(pHead1,pHead2->next);
        }
        return pHeadcombined;
    }
};