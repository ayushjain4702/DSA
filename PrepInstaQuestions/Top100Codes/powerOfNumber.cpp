#include<iostream>
using namespace std;

int powerOfNum(int a,int b){
    
    if(b==0){
        return 1;
    }
   
    return a*powerOfNum(a,b-1);
}

int main(){

    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;

    int ans = powerOfNum(a,b);
    cout<<"Power of a rasie to b is "<<ans<<endl;
    

   
    return 0;
}