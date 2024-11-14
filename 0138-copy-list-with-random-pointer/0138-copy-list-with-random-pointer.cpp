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
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*>mpp;
        Node* temp = head;
        while(temp!=NULL){
            Node* copyNode = new Node(temp->val);
            mpp[temp] = copyNode;
            temp = temp->next;
        }
        temp = head;

        while(temp!=NULL){
            Node* copyNode = mpp[temp];
            copyNode->next = mpp[temp->next];
            copyNode->random = mpp[temp->random];
            temp = temp->next;
        }
        return mpp[head];
    }
};