/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    Node* insertCopyBetween(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next; 
            temp->next = newNode;
            temp = temp->next->next;
        }
        return head;
    }
    Node* connectRandomPointers(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            Node* copyNode = temp->next;
            if(temp->random){
                copyNode->random = temp->random->next;
            }else{
                copyNode->random = NULL;
            }
            temp = temp->next->next;
        }
        return head;
    }
    Node* getDeepCopyList(Node* head){
        Node* dummyNode = new Node(-1);
        Node* temp = head, *res = dummyNode;
        while(temp!=NULL){
            res->next = temp->next;
            res = res->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummyNode->next;
    }
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return head;
        insertCopyBetween(head);
        connectRandomPointers(head);
        return getDeepCopyList(head);        
    }
};