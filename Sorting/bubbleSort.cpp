#include<bits/stdc++.h>
using namespace std;

void swapNum(int &x,int &y){
    
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){                 //T(C) = O(n^2)   S(C) = O(1)
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swapNum(arr[j],arr[j+1]);
            }
        }
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int array[] = {5, 3, 1, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before bubble sort: \n";
    display(array, size);
    
    bubbleSort(array, size);
    
    cout<<"After bubble sort: \n";
    display(array, size);
    return 0;
}