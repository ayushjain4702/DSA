#include<bits/stdc++.h>
using namespace std;

int countPairs(int arr[],int n,int k){

    unordered_map<int,int> mp;   //T(c) = O(n)
    int count = 0;

    for(int i=0;i<n;i++){
        int b = k - arr[i];
        if(mp[b]){
            count= count + mp[b];
        }
        mp[arr[i]]++;
    }
    return count;
}

int main(){

    int arr[] = {1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    int ans = countPairs(arr,size,k);
    cout<<"Number of pairs with give sum in array is "<<ans;
    return 0;
}