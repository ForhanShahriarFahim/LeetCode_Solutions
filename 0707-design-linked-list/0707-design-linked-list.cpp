class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyLinkedList {
public:
        int size = 0;
        Node* head = NULL;
        Node* tail = NULL;
    
        MyLinkedList(){
            
        }
        void display(){
            Node* temp = head; 
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        int get(int index) {
        if(index>=size) return -1;
        Node* temp = head;
        for(int i = 0;i<index;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        if(size == 0)
            tail = temp;
        // cout<<"Added at head "<< val<<endl;
        size++;
    }
    
    void addAtTail(int val) {
        if(size == 0){
            addAtHead(val);
            return;
        }
        Node* temp = new Node(val);
        tail->next = temp;
        tail = temp;
        // cout<<"Added at Tail "<< val<<endl;
        // display();

        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size){
            return;
        }
        else if(size == index){
            addAtTail(val);
        }
        else if(index == 0){
            addAtHead(val);
        }
        else {
            Node* temp = head;
            Node* newNode = new Node(val);
            for(int i = 0;i<index-1;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            // cout<<"Added at index "<< index<<" val "<<val<<endl;
            // display();
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index>=size) return;
        else if(index == size-1){
            if(index == 0){
                head = NULL;
                tail = NULL;
            } else {
                Node* temp = head;
                while(temp->next!=tail){
                    temp = temp->next;
                }
                temp->next = NULL;
                tail = temp;
            }
        }
        else if(index == 0){
            Node* temp = head;
            head= head->next;
            temp = NULL;
        }
        else {
            Node* temp = head;
            for(int i = 0;i<index-1;i++){
                temp = temp->next;
            }
            Node* d = temp->next;
            temp->next = temp->next->next;
            d->next = NULL;            
        }
        size--;
        
    }
    

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */