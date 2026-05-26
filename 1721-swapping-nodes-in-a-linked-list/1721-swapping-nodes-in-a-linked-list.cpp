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
    ListNode* swapNodes(ListNode* head, int k) {
        int m = k;
        ListNode* l = head;
        while(k > 1){
            l = l->next;
            k--;
        }

        int n = 0;
        ListNode* r = head;
        while(r != NULL){
            n++;
            r = r->next;
        }

        n -= m;
        r = head;
        while(n--){
            r = r->next;
        }

        swap(l->val, r->val);
        return head;
    }
};