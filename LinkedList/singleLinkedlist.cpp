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

//deletion

void deleteNode(Node* &head,int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    // insertAtHead(20,head);
    // print(head);
    // insertAtHead(30,head);
    // print(head);
    insertAtTail(20,tail);
    print(head);
    insertAtTail(30,tail);
    print(head);
    insertAtPosition(head,tail,40,4);
    print(head);
    insertAtPosition(head,tail,50,5);
    print(head);
    insertAtPosition(head,tail,0,1);
    print(head);

    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data;
    deleteNode(head,2);
    print(head);
    deleteNode(head,5);
    print(head);
    deleteNode(head,1);
    print(head);

    return 0;
}