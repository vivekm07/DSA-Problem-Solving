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
    int getDecimalValue(ListNode* head) {
        string res="";
        while(head){
            res=res+to_string(head->val);
            head=head->next;
        }
        int k=0,res2=0;
        for(int i=res.size()-1;i>=0;i--){
            res2=res2+(res[i]-'0')*pow(2,k);
            k++;
        }
        return res2;
    }
};
