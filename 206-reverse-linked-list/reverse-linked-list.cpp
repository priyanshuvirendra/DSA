class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr, *cur=head;
        while(cur){
            ListNode* nx=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nx;
        }
        return prev;
    }
};
