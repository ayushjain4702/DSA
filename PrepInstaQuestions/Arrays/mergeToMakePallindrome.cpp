#include<bits/stdc++.h>
using namespace std;

int minOperatins(int arr[],int n){
    int ans = 0;
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }else if(arr[i]>arr[j]){
            arr[j-1] = arr[j-1]+arr[j];
            j--;
            ans++;
        }else{
            arr[i+1]+=arr[i];
            i++;
            ans++;
        }
    }
    return ans;
}

int main(){

    int arr[]= {1,10,8,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = minOperatins(arr, n);
    if(ans == 0){
        cout<<"It is already a pallindrome"<<endl;
    }else{
        cout<<"Min merge operations to make array pallindrome is: "<<ans<<endl;
    }
    return 0;
}