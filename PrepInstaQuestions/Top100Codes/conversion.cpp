#include<bits/stdc++.h>

using namespace std;


//binary to decimal
int binaryToDecimal(long long num){
    int rem;
    int i=0,ans=0;

    while(num>0){
        rem = num%10;
        ans = ans + rem*pow(2,i);
        num = num/10;
        i++;
    }

    return ans;
}

int main(){

    cout<<"Enter binary number: "<<endl;
    long long num;
    cin>>num;
    int ans = binaryToDecimal(num);
    cout<<ans<<endl;

    return 0;
}