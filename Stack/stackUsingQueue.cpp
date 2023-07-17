#include<bits/stdc++.h>

using namespace std;

class Stack{    //method 1

    public:
    int N;
    queue<int> q1;
    queue<int> q2;

    Stack(){
        N = 0;
    }

    void push(int val){
        q2.push(val);
        N++;

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
       return q1.front(); 
    }

    int size(){
        return N;
    }
};
int main(){

    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;


    return 0;
}