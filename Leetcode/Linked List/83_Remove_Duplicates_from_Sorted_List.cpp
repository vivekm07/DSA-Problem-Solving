class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=head;
        if(head==NULL || head->next == NULL)
            return head;
        while(p!=NULL and p->next !=NULL){
            if(p->val == p->next->val)
                    p->next=p->next->next;
            else
                p=p->next;
        }
        return head;
    }
};
