#include<bits/stdc++.h>
using namespace std;

//C++ program to reverse a linked list by changing links between nodes


class Node{
    public:
        int data;
        Node* next;
        
        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};
//print
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//insertion
void insertAtFront(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    int count =1;
    Node* temp = head;
    if(pos==1){
        insertAtFront(head,data);
        return;
    }
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,data);
        return;
    }
    Node* insertNode = new Node(data);
    insertNode->next = temp->next;
    temp->next = insertNode;
    
}

void reverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtFront(head,5);
    insertAtFront(head,0);
    insertAtEnd(tail,15);
    insertAtEnd(tail,20);

    print(head);
    reverse(head);
    print(head);
    

    return 0;
    
}