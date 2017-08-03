class Solution {
    typedef struct Listnode{
    int val;
    Listnode *next;
}*pListnode;
pListnode head,curr;
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(n==0) return -1;
     	head=(struct Listnode *)malloc(sizeof(*head));
        curr=head;
        for(int i=0;i<n;i++){
            pListnode temp;
            temp=(struct Listnode *)malloc(sizeof(*temp));
            temp->val=i;
            curr->next=temp;
            curr=curr->next;
        }
        curr->next=head->next;
        curr=head;
        int cnt=n;
        while(cnt>1){
            for(int i=0;i<m-1;i++)
            	curr=curr->next;
            curr->next=curr->next->next;
            cnt--;
        }
        return curr->val;
    }
};