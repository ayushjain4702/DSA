#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
};

class Queue{
    public:
        Node* front;
        Node* back;
    
    Queue(){
        front = NULL;
        back = NULL;
    }

    void enqueue(int data){
        Node* temp = new Node(data);
        if(front == NULL){
            front = temp;
            back = temp;
        }
        back->next = temp;
        back = temp;
    }

    void dequeue(){
        if(front== NULL){
            std::cout<<"queue is underflow"<<endl;
            return;
        }
        Node* todelete = front;
        front =front->next;

        delete todelete; 
    }

    void peek(){
        if(front== NULL){
           std:: cout<<"queue is empty"<<endl;
            return;
        }
        std::cout<<front->val<<endl;
    }

    bool isEmpty(){
       if(front== NULL){
            return true;
        } 
        return false;
    }
};

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
   

    std::cout<<q.isEmpty();


    return 0;
}