#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseUsingStack(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void reverseUsingRecurrsion(queue<int> &q){
    if(q.empty()){
        return;
    }
    int elm = q.front();
    q.pop();
    reverseUsingRecurrsion(q);
    q.push(elm);
}

void printQueue(queue<int> q)
{

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    queue<int> q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }
    cout<<"Queue before Reversing: ";
    printQueue(q);
    // reverseUsingStack(q);
    reverseUsingRecurrsion(q);
    cout<<"Queue after Reversing: ";
    printQueue(q);

    
    return 0;
}