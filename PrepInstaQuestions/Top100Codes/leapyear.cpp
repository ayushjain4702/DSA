#include<bits/stdc++.h>
using namespace std; 

bool leapYear(int year){
    if(year%4==0 && (year%400 == 0 || year % 100 !=0)){
        return true;
    }else{
        return false;
    }
}

int main(){

    cout<<"Enter year: ";
    int year;
    cin >>year;
    cout<<leapYear(year)<<endl;
    return 0;
}