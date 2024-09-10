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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur, *pre;
        cur = pre = head;
        while(cur->next!=NULL){
            pre = cur;
            cur = cur->next;
            pre->next = new ListNode(gcd(cur->val,pre->val),cur);            
        }
        return head;
    }
};