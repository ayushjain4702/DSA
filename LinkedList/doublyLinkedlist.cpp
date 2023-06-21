#include<bits/stdc++.h>
using namespace std;

//class 
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

//print
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//length
int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//insert at head
void insertAtHead(Node* &head,int d){

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//insert at tail
void insertAtTail(Node* &head,int d){
    Node* temp = new Node(d);
    Node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = temp;
    temp->prev = p;

}

//insert at any position
void insertAtPosition(Node* &head,int pos,int d){
    Node *temp = head;
    int count =1;
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(head,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

//deletion
void deleteNode(Node* &head,int pos){
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* previous =NULL;
        int count =1;
        while(count<pos){
            previous = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        previous->next = curr->next;
        if(curr->next!=NULL){
        curr->next->prev = previous;
        }
        curr->next = NULL;
        delete curr;

    }
}


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtPosition(head,2,20);
     insertAtPosition(head,2,30);
    print(head);
    // // cout<<getLength(head);
    // insertAtHead(head,5);
    // print(head);
    // insertAtHead(head,0);
    // print(head);
    // // insertAtTail(head,10);
    // // print(head);
    // insertAtTail(head,15);
    // print(head);
    // // insertAtPosition(head,4,13);
    // // print(head);
    // // insertAtPosition(head,1,-2);
    // // print(head);
    // // insertAtPosition(head,8,20);
    // // print(head);
    // deleteNode(head,4);
    // print(head);
    // deleteNode(head,3);
    // print(head);
    // deleteNode(head,1);
    // print(head);
    return 0;
}