#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
        int *arr;
        int size;
        int qfront;
        int qrear;
    
    Queue(int n){
        this->size =n;
        arr = new int[size];
        qfront=0;
        qrear=0;
    }

    void enqueue(int data){
        if(qrear == size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[qrear]=data;
            qrear++;
        }
    }

    int dequeue(){
        if(qfront == qrear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==qrear){
                qfront=0;
                qrear=0;
            }
            return ans;
        }
    }

    int front(){
         if(qfront==qrear){
            return -1;
        }else{
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if(qfront==qrear){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    cout<<q.front()<<endl;
    q.enqueue(30);
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    // cout<<q.dequeue()<<endl;
    cout<<q.isEmpty()<<endl;

    return 0;
}