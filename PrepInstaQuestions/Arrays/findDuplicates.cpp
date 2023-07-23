#include<bits/stdc++.h>
using namespace std;

void printDuplicates(int arr[],int n){

    cout<<"Repeated elements in array are: ";
    
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])] >= 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }else{
            cout<<abs(arr[i])<<" ";
        }
    }
}

int main(){

    // int arr[] = {1,2,3,1,3,6,6};
    int arr[] = {1, 2, 3, 4 ,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    printDuplicates(arr,size);
    return 0;
}