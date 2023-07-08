#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int size,int x){
                                            //T(C) = O(n) 
    for(int i=0;i<size;i++){
        if(arr[i]== x){
            cout<<"Element "<<x<<" Found at index "<<i<<endl;
            return;
        }
    }
    cout<<"Element not  found"<<endl;
}

int main(){

    int arr[] = {10,5,6,45,8,98};
    int size = sizeof(arr)/sizeof(arr[0]);

    int X;
    cout<<"Enter element to be searched: ";
    cin>>X;
    linearSearch(arr,size,X);
    return 0;
}