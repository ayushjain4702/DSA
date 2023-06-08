#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int size;
    int rear;
    int front;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        arr = new int[size];
        rear = front = -1;

    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            //queue is full
            return false;
        }
        else if(front==-1){
            //first push
            rear=front=0;
        }
        else if((rear==size-1) && (front!=0)){
            //to maintain cyclic nature
            rear=0;
        }else{
            //normal 
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
            return -1;//queue is empty
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front==rear){
            //1 elm is there
            rear=front=-1;
        }else if(front==size-1){
            //for cyclic
            front=0;
        }
        else{
            front++;//normal
        }
        return ans;
    }
};

int main(){

    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.dequeue()<<endl;
    q.enqueue(60);
    cout<<q.dequeue()<<endl;
    q.enqueue(70);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.enqueue(80);

    return 0;
}