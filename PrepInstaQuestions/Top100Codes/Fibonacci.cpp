
#include<bits/stdc++.h>
using namespace std; 

void fib(int n){

    int a = 0,b=1;
    cout<<a<<","<<b<<",";

    for(int i=2;i<n;i++){
        int next = a+b;
        cout<<next<<",";
        a = b;
        b = next;
    }
}

int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){

    int n;
    cin>>n;
    fib(n);
    cout<<endl<<fibo(n);
    return 0;
}