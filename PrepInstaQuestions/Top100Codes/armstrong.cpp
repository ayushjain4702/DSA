// Any number that satisfies the following format –abcd… = a^n + b^n + c^n + d^n + …

#include<bits/stdc++.h>
using namespace std; 

int order(int num){
    int len = 0;

    while(num>0){
        len++;
        num/=10;
    }

    return len;
}

bool amrstrong(int num,int n){

    int sum = 0;
    int rem;
    int temp = num;

    while(num>0){
        rem = num%10;
        sum = sum + pow(rem,n);
        num = num/10;
    }

    if(sum==temp){
        return true;
    }else{
        return false;
    }
}

// int main(){

//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;

//     int len = order(num);

//     if(amrstrong(num,len)){
//         cout<<num<<" is a armstrong number"<<endl;
//     }else{
//         cout<<num<<" is not  a armstrong number"<<endl;
//     }

//     return 0;
// }



//Find the Armstrong Numbers in a given Interval

void allArmstrong(int a,int b){

    for(int i=a;i<=b;i++){
        int len  = order(i);

        int sum = 0;
        int rem,temp = i;

        while(temp>0){
            rem = temp%10;
            sum = sum + pow(rem,len);
            temp/=10;
        }
        if(sum == i ){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){

    int a,b;
    cout<<"Enter the range: "<<endl;
    cin>>a>>b;

    allArmstrong(a,b);


    return 0;
}