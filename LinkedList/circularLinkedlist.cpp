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

void insertNode(Node* &tail,int elm,int d){
    //empty LL
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        //non-empty list
        //assuming elm is present in list
        Node* curr = tail;
        while(curr->data!= elm){
            curr = curr->next;
        }

        //now elm is found and curr is point to that elm
        Node* newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}
//print and traverse LL
void print(Node* tail){
    Node* temp = tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!= temp);
    cout<<endl;
}

//delete
void deleteNode(Node* &tail,int val){
    if(tail==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }else{
        Node* prev = tail;
        Node* curr = tail->next;
        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //for 1 node
        if(curr == prev){
            tail = NULL;
        }
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    
    Node* tail = NULL;
    insertNode(tail,10,10);
    print(tail);
    // insertNode(tail,10,15);
    // print(tail);
    // insertNode(tail,10,20);
    // print(tail);
    // deleteNode(tail,15);
    // print(tail);
    deleteNode(tail,10);
    print(tail);

    return 0;
}