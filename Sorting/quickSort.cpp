#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[],int s,int e){

    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(pivot > arr[i]){
            count++;
        }
    }
    int pivotIndex = count+s;
    swap(arr[pivotIndex],arr[s]);


    int i=s,j=e;
    while(i<pivotIndex && j > pivotIndex){

        while(arr[i]<=arr[pivotIndex]){
            i++;
        }

        while(arr[j]>=arr[pivotIndex]){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){  //T(c) = O(nlogn)  S(c) = O(1)

    if(s<e){
        int pi = partition(arr,s,e);

        quickSort(arr,s,pi-1);
        quickSort(arr,pi+1,e);
    }
}

int main(){

    int array[] = {5, 3, 1, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before quick sort: \n";
    display(array, size);
    
    quickSort(array, 0,size-1);
    
    cout<<"After quick sort: \n";
    display(array, size);
    
    return 0;
}