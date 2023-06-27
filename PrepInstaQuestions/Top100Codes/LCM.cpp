#include<bits/stdc++.h>
using namespace std;

int LCM(int a,int b){
    
    int maxNum = max(a,b);

    for(int i = maxNum;i<a*b;i++){
        if(i%a == 0 && i%b==0){
            return i;
        }
    }
    return -1;
}

int main(){

    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;

    int ans = LCM(num1,num2);
    cout<<"LCM is "<<ans<<endl;
    
    return 0;
}