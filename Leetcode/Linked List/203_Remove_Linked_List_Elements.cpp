class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
          if(head == NULL) {
            return head;
        }
        ListNode *prev = NULL, *temp = head;
        while(head!=0) {
            if(head->val != val) {
                prev = head;

            } 
            else {
                if(prev != NULL) {
                    prev->next = head->next;
                } 
                else {
                    temp = head->next;
                }
            }
            head = head->next;
        }
        return temp;
    }
};
