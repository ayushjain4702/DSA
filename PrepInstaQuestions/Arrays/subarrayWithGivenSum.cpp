#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {15, 5, 10,2, 4, 8, 9};
    int sum = 23;
    int n = sizeof(arr)/sizeof(arr[0]);
    //using sliding window
    int start = 0;
    int curr_sum = arr[0];

    for(int i=1;i<=n;i++){
        while(curr_sum > sum && start<i-1){
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if(curr_sum == sum){
            cout<<"Starting and ending index of subarray is "<<start<<" and "<<i-1<<endl;
            break;
        }
        if(i<n){
            curr_sum+=arr[i];
        }
         
    }

    // cout<<"No subarray is found"<<endl;

    
    return 0;
}