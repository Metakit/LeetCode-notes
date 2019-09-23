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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(-1), *now, *p1 = l1, *p2 = l2, *q = ans;
        int add, cnt = 0;
        int num1, num2;
        while(!(p1 == NULL && p2 == NULL)) {
            if (p1 == NULL) num1 = 0;
            else            num1 = p1->val, p1 = p1->next;
            if (p2 == NULL) num2 = 0;
            else            num2 = p2->val, p2 = p2->next;
            
            add = num1 + num2 + cnt;
            if (add >= 10) now = new ListNode(add - 10), cnt = 1;
            else           now = new ListNode(add),      cnt = 0;
            q->next = now;
            q = q->next;
        }
        if (cnt == 1) q->next = new ListNode(1);
        return ans->next;
    }
};