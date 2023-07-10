#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int array[],int n){
                                            //T(C) = O(N^2)
    for(int i=1;i<n;i++){
        int curr = array[i];  
        int j = i-1;

        while(array[j]>curr && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = curr;
    }
}

int main(){

    int array[] = {5, 3, 1, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before insertion sort: \n";
    display(array, size);
    
    insertionSort(array, size);
    
    cout<<"After insertion sort: \n";
    display(array, size);
    return 0;
}