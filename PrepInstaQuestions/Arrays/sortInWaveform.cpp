#include<bits/stdc++.h>
using namespace std;

//Method 1 by sorting      Time Complexity: O(nlogn)
void waveform(int arr[],int size){

    sort(arr,arr+size);

    for(int i=0;i<size;i=i+2){
        if(i<size-1){
            swap(arr[i],arr[i+1]);
        }
        
    }

}

//Method 2 by incrementing loop by 2      Time Complexity: O(n)    (Better approach)
void waveform2(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i>0 && arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(i<size-1 && arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {10,49,2,1,5,23};

    int size = 6;
    // waveform(arr,size);
    printArray(arr,size);
    waveform2(arr,size);
    printArray(arr,size);
    return 0;
}