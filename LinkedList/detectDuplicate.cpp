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


//remove duplicates
Node *removeDuplicates(Node *&head)
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    Node* ptr1 = head;
    Node *ptr2,*dup = NULL;
    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2 = ptr1;

        while(ptr2->next!=NULL){
            if(ptr1->data == ptr2->next->data){
                dup = ptr2->next;
                ptr2->next = dup->next;
                delete(dup);
            }else{
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
    return head;
}

int main(){

    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
   // print(head);

    insertAtTail(2,tail);
    // print(head);
    insertAtTail(1,tail);
    // print(head);
    insertAtTail(2,tail);
    insertAtTail(2,tail);
    insertAtTail(2,tail);
    insertAtTail(7,tail);
    insertAtTail(7,tail);
    print(head);
    removeDuplicates(head);
    print(head);
    return 0;
}