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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int count=0;
        ListNode* l= head;
        while (l!= NULL){
            count++;
            l=l->next;
        }
        int d= count-n+1;
        ListNode* prev=dummy;
        ListNode* curr=head;
        int i=0;
        while(i<(d-1)){
            prev= prev->next;
            curr= curr->next;
            i++;
        }
        prev->next= curr->next;
        return dummy->next;
    }
};