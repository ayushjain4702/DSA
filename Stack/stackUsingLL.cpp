#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
};

class Stack{
    
    public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int elm){
        Node* temp = new Node();
        temp->val = elm;
        temp->next = head;
        head = temp;
        size++;

        cout<<"Element "<<elm<<" pushed into stack."<<endl;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack underflow"<<endl;
            return ;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
        cout<<"Element is popped"<<endl;
    }

    int peek(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            cout<<"top element is:"<<head->val<<endl;
            return head->val;
        }
    }

    int stackSize(){
        cout<<"size of stack is:"<<size<<endl;
        return size;
    }

    int empty(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return 1;
        }else{
            cout<<"Stack is not empty"<<endl;
            return 0;
        }
    }
};
int main(){
    Stack s;
    s.empty();
    s.push(10);
    s.push(20);

    s.peek();

    s.stackSize();

    s.pop();
    s.stackSize();
    s.peek();
    s.pop();
    s.empty();
    return 0;
}