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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* lft = head;
        ListNode* rgt = head;
        while(--left){
            lft = lft->next;
        }
        int m = right;
        while(--right){
            rgt = rgt->next;
        }
        int i = 1;
        while(lft < rgt){
            swap(lft->val, rgt->val);
            lft = lft->next;
            int n = m-i;
            rgt = head;
            while(--n){
                rgt = rgt->next;
            }
            i++;
        }
        return head;
    }
};