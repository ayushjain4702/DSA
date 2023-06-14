#include<bits/stdc++.h>
using namespace std; 

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){   //t(c) = O(nlogn)
    int size = n;
    while(size>1){
        
        //step 1
        swap(arr[1],arr[size]);

        //step2
        size--;

        //step3
        heapify(arr,size,1);
    }
}

int main(){
    int arr[6] = {-1,34,36,25,38,28};
    int n=5;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<endl;
}