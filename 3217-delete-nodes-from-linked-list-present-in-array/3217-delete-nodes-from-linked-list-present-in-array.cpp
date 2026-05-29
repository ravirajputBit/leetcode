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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());

        while(head != NULL && s.count(head->val)>0){
            head = head->next;
        }
        if(head == NULL) return NULL;

        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            if(s.count(temp->val) > 0){
                prev->next = temp->next;
                temp = NULL;            
                temp = prev->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};