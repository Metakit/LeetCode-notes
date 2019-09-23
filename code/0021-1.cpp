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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l2 == nullptr) return l1;
        if (l1 == nullptr) return l2;
        
        ListNode *p = l1, *q = l2, *ans, *now;
        if (p->val < q->val) ans = p, p = p->next;
        else                 ans = q, q = q->next;
        now = ans;
        
        for (; p != nullptr && q != nullptr; ) {
            if (p->val < q->val) now->next = p, p = p->next;
            else                 now->next = q, q = q->next;
            now = now->next;
        }
        if (p != nullptr) now->next = p;
        if (q != nullptr) now->next = q;
        return ans;
    }
};