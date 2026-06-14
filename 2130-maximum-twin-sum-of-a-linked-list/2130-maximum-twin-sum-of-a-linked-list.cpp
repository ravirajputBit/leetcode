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
    int pairSum(ListNode* head) {
        ListNode* sl = head;
        ListNode* ft = head->next;
        stack<int> s;
        s.push(sl->val);
        while(ft->next != NULL){
            sl = sl->next;
            s.push(sl->val);
            ft = ft->next->next;
        }

        sl = sl->next;
        int ans = INT_MIN;
        while(sl != NULL){
            int a = s.top();
            int b = sl->val;
            s.pop();
            sl = sl->next;
            ans = max(ans, a+b);
        }
        return ans;
    }
};