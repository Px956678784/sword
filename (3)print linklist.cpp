/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
#include<stack>
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
    ListNode *curr=head;
    stack<int> temp;
    vector<int> answer;
        while(curr!=NULL){
            temp.push(curr->val);
            curr=curr->next;
        }
        while(!temp.empty()){
            answer.push_back(temp.top());
            temp.pop();
        }
        return answer;
    }
};