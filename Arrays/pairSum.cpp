#include<bits/stdc++.h>
using namespace std;

//Brute Force   Time Complexity: O(N^2)
// void pairSum(int arr[],int size,int target){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<"Pair: "<<i<<" "<<j<<endl;
//             }
//         }
//     }
// }

//Optimized By sorting    Time Complexity:O(nlogn)

void pairSum(int arr[],int size,int target){
    sort(arr,arr + size);
    int i=0,j=size-1;
    while(i<j){
        int currSum = arr[i]+arr[j];
        if(currSum == target){
            cout<<"Pair: "<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }else if(currSum<target){
            i++;
        }else if(currSum>target){
            j--;
        }
    }
}
int main(){

    int arr[8] = {5,8,1,4,6,3,2,7};
    int target = 10;
    int size = 8;
    pairSum(arr,size,target);
    return 0;
}