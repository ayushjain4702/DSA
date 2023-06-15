#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,12,-5,-6,50,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;

    int max_sum=INT_MIN;
    int curr_sum = 0;
    for(int i=0;i<k;i++){
        curr_sum+=arr[i];
    }
    max_sum = curr_sum;
    int index = k-1;
    for(int i=k;i<n;i++){
        curr_sum+=arr[i]-arr[i-k];
        max_sum = max(max_sum,curr_sum);
        if(max_sum == curr_sum){
            index = i;
        }
    }

    cout<<"Maximum Average subarray is: "<<(double)max_sum/k<<endl;
    cout<<"Maximum Subarray starts from index : "<<index-k+1<<endl;

    return 0;
}