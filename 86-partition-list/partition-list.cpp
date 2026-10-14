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
    ListNode* partition(ListNode* head, int x) {
        ListNode smalldummy(0);
        ListNode bigdummy(0);
        ListNode* small = &smalldummy;
        ListNode* big = &bigdummy;

        ListNode* current = head;

        while (current != nullptr) {
            ListNode* newcurrent = current->next;
            current->next = nullptr;
            if (current->val < x) {
                small->next = current;
                small = small->next;
            } else  {
                big->next = current;
                big = big->next;
            }
            current = newcurrent;
        }

        small->next = bigdummy.next;

        return smalldummy.next;
    }
};