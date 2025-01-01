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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) 
            return head;

        ListNode* last = head;
        int length = 1;
        
        while (last->next) {
            last = last->next;
            length += 1;
        }

        last->next = head;

        k = k % length;
        int steps_to_new_head = length - k;
        ListNode* tail = head;
        
        for (int i = 0; i < steps_to_new_head - 1; i++) {
            tail = tail->next;
        }
        ListNode* nhead = tail->next;
        tail->next = NULL;

        return nhead;
    }
};
