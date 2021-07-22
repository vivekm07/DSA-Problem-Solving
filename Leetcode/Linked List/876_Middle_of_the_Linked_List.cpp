/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int cnt = 0;
        while(curr!=NULL){
            curr = curr->next;
            cnt++;
        }
        curr = head;
        int n = (cnt/2)+1;
        int k=1;
        while(k<n){
            curr = curr->next;
            k++;
        }
        return curr;
    }
};
