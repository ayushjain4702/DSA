#include<bits/stdc++.h>
using namespace std;

void tripletSum(int arr[],int n,int sum){

    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k] == sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                j++;
                k--;        
            }else if(arr[i]+arr[j]+arr[k] < sum){
                j++;
            }else{
                k--;
            }
        }
    }
}

int main(){

    int arr[] = {15, 5, 10,2, 4, 8, 9};
    int sum = 23;
    int n = sizeof(arr)/sizeof(arr[0]);

    //Approach 1  ------  Brute Force  
    // USe 3 nested loops    T(C) = O(N^3)

    //Approach 2 ------------ Use sorting and 2 pointer approach
    // T(C) = O(n^2)
    cout<<"Triplets that equals to sum are: "<<endl;
    tripletSum(arr,n,sum);


    return 0;
}