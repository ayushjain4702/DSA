#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int size,int k){

    // for(int i=0;i<k;i++){
    //     int temp = arr[0];
    //     for(int j=1;j<size;j++){
    //         arr[j-1]=arr[j];
    //     }
    //     arr[size-1]=temp;
    // }

    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i=0;i<size-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=size-k,j=0;i<size;i++,j++){
        arr[i]=temp[j];
    }
}

void rightRotate(int arr[],int size,int k){

    int temp[k];
    for(int i=size-k,j=0;i<size;i++,j++){
        temp[j]=arr[i];
    }

    for(int i=size-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[5] = {1,2,3,4,5};

    // leftRotate(arr,5,3);
    rightRotate(arr,5,4);
    printArray(arr,5);
}



