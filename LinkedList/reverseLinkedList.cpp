#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//print linked list
void print(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}
//insert at start
void insertAtHead(int d,Node* &head){
    Node* temp  = new Node(d);
    temp->next = head;
    head = temp;
    
}

//insert at end
void insertAtTail(int d,Node* &tail){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = tail->next;
}

//insert at any position
void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    int count = 1;
    Node*temp = head;
    if(pos == 1){
        insertAtHead(data,head);
        return;
    }
    while(count<pos-1){
        temp = temp->next;
        count++;
        }
    if(temp->next == NULL){
        insertAtTail(data,tail);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}
//reverse LL
void reverse(Node* &head){
     if(head==NULL || head->next == NULL){
        return ;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

}

//reverse LL in K groups
Node* kReverse(Node* head, int k) {
    // Write your code here.
    //base case
    if(head==NULL){
        return head;
    }

    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    while(curr!=NULL && count<k ){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL) {
      head->next = kReverse(forward, k);
    }
    
    return prev;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtPosition(head,tail,20,2);
    insertAtPosition(head,tail,30,3);
    insertAtPosition(head,tail,35,4);
    insertAtPosition(head,tail,40,5);
    print(head);
    // cout<<"Reverse Linked List: ";
    // reverse(head);
    // print(head);
    Node* node = kReverse(head,3);
    Node* h = node;
    print(h);
    

    return 0;
    
}