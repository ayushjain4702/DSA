#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int item){
        // Time Complexity : O(log n)  Space Complexity : O(1)

    while(low<=high){
        int mid = low + (high-low)/2 ;

        if(arr[mid] == item){
            return mid;
        }else if(arr[mid] > item){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

//recursive way
int binary(int arr[],int low,int high,int item){
    if(low<=high){
        int mid = low + (high-low)/2;

        if(arr[mid]==item){
            return mid;
        }else if(arr[mid]>item){
            binary(arr,low,mid-1,item);
        }else{
            binary(arr,mid+1,high,item);
        }
    }else{
        return -1;
    }
}


int main(){

    // array needs to be sorted to impliment binary search
    int arr[] = {3, 5, 7, 9, 12, 15, 16, 18, 19, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 22;
    
    // int position = binarySearch(arr, 0, n - 1, item);
      int position = binary(arr, 0, n - 1, item);
    
    if(position == -1)
        cout << item << " Not Found";
    else
        cout << item << " Found at index " << position;

    return 0;
}