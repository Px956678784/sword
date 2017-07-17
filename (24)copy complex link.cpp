/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL) return NULL;
        RandomListNode *newhead=new RandomListNode(pHead->label);
        newhead->random=pHead->random;
        newhead->next=Clone(pHead->next);
        return newhead;
    }
};