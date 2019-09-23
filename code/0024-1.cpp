/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *p = head, *q = head->next, *r = q->next;
        head = q;
        for (; ; ) {
            q->next = p;
            if (r == nullptr || r->next == nullptr) {
                p->next = r;
                break;
            }
            else p->next = r->next;
            p = r, q = r->next, r = q->next;
        }
        return head;
    }
};