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
    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
        int length1=findlength(pHead1);
        int length2=findlength(pHead2);
        if(length1>length2)
            pHead1=walk(pHead1,length1-length2);
        else
            pHead2=walk(pHead2,length2-length1);
        while(pHead1!=NULL){
            if(pHead1==pHead2)
                return pHead1;
            pHead1=pHead1->next;
            pHead2=pHead2->next;
        }
        return NULL;
    }
    int findlength(ListNode *pHead){
        if(pHead==NULL)return NULL;
        int cnt=0;
        while(pHead!=NULL){
            cnt++;
            pHead=pHead->next;
        }
        return cnt;
    }
    ListNode *walk(ListNode *pHead,int step){
        for(int i=0;i<step;i++)
            pHead=pHead->next;
        return pHead;
    }
};