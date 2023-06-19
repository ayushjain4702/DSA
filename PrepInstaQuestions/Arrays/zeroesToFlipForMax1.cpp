#include <bits/stdc++.h>
using namespace std;
//Find Zeros to be Flipped so that number of Consecutive 1’s is maximized
void zeroesIndexes(int arr[],int k,int n){
    int i=0,j=0;
    int zeroCount = 0;
    int ans = INT_MIN;

    while(j<n){
        if(arr[j]==0){
            zeroCount++;
        }
        while(zeroCount>k){
            if(arr[i]==0){
                zeroCount--;
            }
            i++;
        }
        ans = max(ans,(j-i+1));
        j++;
    }
    cout<<"maximum number of consecutive 1's if k zeros are flipped is : "<<ans<<endl;
}

int main(){

    int arr[] = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int zeroes= 3; //no of zeroes that can be flipped
    int n = sizeof(arr)/sizeof(arr[0]);
    zeroesIndexes(arr, zeroes, n);

    return 0;
}