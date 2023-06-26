#include<bits/stdc++.h>
using namespace std; 

bool isPrime(int num){
    if(num <2){
        return false;
    }else if(num==2){
        return true;
    }else{
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    
}

int main(){

    cout<<"Enter a range: ";
    int num1;
    int num2;
    cin>>num1>>num2;

    for(int i = num1;i<=num2;i++){
        if(isPrime(i) == 1){
            cout<<i<<" ";
        }
    }
    
    return 0;
}