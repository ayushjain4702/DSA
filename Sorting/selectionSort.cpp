#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
                                        //T(c) = O(n^2)
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main(){

    int array[] = {5, 3, 1, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before selection sort: \n";
    display(array, size);
    
    selectionSort(array, size);
    
    cout<<"After selection sort: \n";
    display(array, size);
    
    return 0;
}