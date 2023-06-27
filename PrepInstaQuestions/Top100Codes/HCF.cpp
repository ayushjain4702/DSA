#include<iostream>
using namespace std;

int HCF(int a,int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }else if(a > b){
        return HCF(b,a%b);
    }else{
        return HCF(a,b%a);
    }
}

int main(){

    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;

    int ans = HCF(num1,num2);
    cout<<"HCF is "<<ans<<endl;
    

   
    return 0;
}