#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str,int n){
    int i=0,j=n-1;
    while(i<=j){
        swap(str[i++],str[j--]);
    }
}

int main(){

    string str = "Hello";
    int size = str.size();
    reverseString(str,size);
    cout<<str<<endl;
    return 0;
}