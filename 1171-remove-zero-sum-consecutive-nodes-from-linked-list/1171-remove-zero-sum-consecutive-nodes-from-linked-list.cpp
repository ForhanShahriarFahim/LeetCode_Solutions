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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummyNode = new ListNode(0,head);
        ListNode* temp = dummyNode;
        unordered_map<int, ListNode*>mp;
        int prefixSum = 0;
        while(temp!=NULL){
            prefixSum+=temp->val;
            mp[prefixSum] = temp;
            temp = temp->next;
        }
        prefixSum = 0;
        temp = dummyNode;
        while(temp!=NULL){
            prefixSum+=temp->val;
            temp->next = mp[prefixSum]->next;
            temp = temp->next;
        }
        return dummyNode->next;
    }
};