class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        ListNode head(0), *p=&head;
        while(a && b){
            if(a->val<b->val){ p->next=a; a=a->next; }
            else { p->next=b; b=b->next; }
            p=p->next;
        }
        p->next = a? a : b;
        return head.next;
    }
};