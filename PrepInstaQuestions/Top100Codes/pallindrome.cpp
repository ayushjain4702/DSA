#include<iostream>
using namespace std;

bool pallindrome(int num){
    int ans = 0;
    int num2 = num;
    int rem;
    while(num2!=0){
        rem = num2 % 10;
        ans = ans*10 + rem;
        num2 = num2/10;
    }

    if(num == ans){
        return true;
    }
    return false;

}

int main(){

    int num;
    cin>>num;

    bool ans = pallindrome(num);
    if(ans){
        cout<<"It is pallindrome"<<endl;
    }else{
        cout<<"Not a pallindrome"<<endl;
    }
    return 0;
}