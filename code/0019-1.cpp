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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return head;
        ListNode *p = head, *q = head, *r = head;
        for (int i = 0; i < n; ++i) q = q->next;
        while(q != nullptr) {
            q = q->next;
            r = p;
            p = p->next;
        }
        if (r == p) { // wrong: r == head, [1,2] n=1.
            head = r->next;
            free(r);
        }
        else {
            r->next = r->next->next;
            free(p);
        }
        return head;
    }
};