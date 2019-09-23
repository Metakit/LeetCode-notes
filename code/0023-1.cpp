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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ans = nullptr, *p = ans;
        int len = lists.size();
        if (len == 0) return ans;
        
        vector<int> head(len+1, 0);
        for (int i = 0; i < len; ++i) {
                if (lists[i] == nullptr) head[i] = -0x3f3f3f3f;
                else                     head[i] = lists[i]->val;
        }
        
        while(true) {
            int minVal = 0x3f3f3f3f, minAddr = -1;
            for (int i = 0; i < len; ++i) {
                if (head[i] != -0x3f3f3f3f && head[i] < minVal) {
                    minVal  = head[i];
                    minAddr = i;
                }
            }
            if (minVal == 0x3f3f3f3f) return ans;
            else {
                if (ans == nullptr) p = new ListNode(minVal), ans = p;
                else                p->next = new ListNode(minVal), p = p->next;
                lists[minAddr] = lists[minAddr]->next;
                if (lists[minAddr] == nullptr) head[minAddr] = -0x3f3f3f3f;
                else                           head[minAddr] = lists[minAddr]->val;
            }
        }
        return ans;
    }
};