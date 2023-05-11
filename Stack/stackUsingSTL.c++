#include<bits/stdc++.h>
using namespace std;

int main(){

    //implemeting stack using STL
    stack<int> s;
    s.push(1);
    s.push(2);
    cout<<"Size of stack is: "<<s.size()<<endl;
    cout<<"Printing top elm: "<<s.top()<<endl;
    s.pop();
    // s.pop();
    // cout<<"Printing top elm: "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is: "<<s.size()<<endl;



    return 0;
}