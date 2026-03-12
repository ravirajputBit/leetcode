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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* d = new ListNode(0);
        d->next = head;
        ListNode* prev = d;
        
        while(prev->next && prev->next->next){
            ListNode* fst = prev->next;
            ListNode* snd = fst->next;
            fst->next = snd->next;
            snd->next = fst;
            prev->next = snd;

            prev = fst;
        }
        return d->next;
    }
};