#include<bits/stdc++.h>

using namespace std;

class Queue{
    //using 2 stack
    public:
    stack<int> s1;
    stack<int> s2;

    void push(int data){
        s1.push(data);
    }

    void pop(){
        if(s1.empty() && s2.empty()){
           std::cout<<"queue is empty"<<endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int popped = s2.top();
        s2.pop();
        std::cout<<popped<<" is popped from queue"<<endl;
    }

    bool isEmpty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};

class Que{
    //using 1 stack and recursion
    public:
    stack<int> s1;

    void push(int data){
        s1.push(data);
    }

    int pop(){
        if(s1.empty()){
           std::cout<<"queue is empty"<<endl;
            return -1;
        }
        
        int elm =  s1.top();
        s1.pop();
        if(s1.empty()){
            return elm;
        }
        int rec = pop();
        s1.push(elm);
        return rec;
    }

    bool isEmpty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }

};
int main(){

    // Queue q;
    Que q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    std::cout<<q.pop()<<endl;
    std::cout<<q.pop()<<endl;
    q.push(50);
    std::cout<<q.pop()<<endl;
   std::cout<<q.pop()<<endl;
    std::cout<<q.pop()<<endl;;
    std::cout<<q.isEmpty();


    return 0;
}