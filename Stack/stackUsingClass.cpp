#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
    }

    void push(int elm){
        if(size-top > 1){
            top++;
            arr[top] = elm;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >=0){
            top--;
        }else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout<<st.peek()<<endl;
    cout<<st.isEmpty()<<endl;
    

    return 0;
}