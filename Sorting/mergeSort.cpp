#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    int l1 = mid-s+1;
    int l2 = e - mid;

    int arr1[l1],arr2[l2];

    //copy in 2 array
    int index = s;
    for(int i=0;i<l1;i++){
        arr1[i]=arr[index];
        index++;
    }
    index = mid+1;
    for(int i=0;i<l2;i++){
        arr2[i]=arr[index];
        index++;
    }

    //merger 2 sorted array
    int i=0,j=0;
    index = s;
    while(i<l1 && j<l2){
        if(arr1[i]<arr2[j]){
            arr[index]=arr1[i];
            i++;
            index++;
        }else{
            arr[index] = arr2[j];
            j++;
            index++;
        }
    }

    while(i<l1){
        arr[index]=arr1[i];
        i++;
        index++;
    }

    while(j<l2){
        arr[index] = arr2[j];
        j++;
        index++;
    }
}

void mergeSort(int arr[],int start,int end){        //T(C) = O(nlogn)  S(c) = O(n)

    if(start < end){
        int mid = (start+end)/2;

        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,end);
    }
}

int main(){

    int array[] = {5, 3, 1, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before merge sort: \n";
    display(array, size);
    
    mergeSort(array, 0,size-1);
    
    cout<<"After merge sort: \n";
    display(array, size);
    return 0;
}