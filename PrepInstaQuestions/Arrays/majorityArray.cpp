#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(N^2)      Space Complexity = O(1)

// void majorityElm(int arr[],int size){
//     int maxCount = 0;
//     int index = -1;
//     for(int i=0;i<size;i++){
//             int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count>maxCount){
//             maxCount=count;
//             index = i;
//         }
//     }
//     if(maxCount>=size/2){
//         cout<<"MAjority Element is "<<arr[index]<<endl;
//     }else{
//         cout<<"No majority element"<<endl;
//     }
// }

// Boyer-Moore Majority Vote Algorithm
// Time Complexity = O(N)      Space Complexity = O(1)

void majorityElm2(int arr[],int size){
    int candidate,count=0;

    for(int i=0;i<size-1;i++){
        if(count==0){
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i]==candidate){
            count++;
        }
        else if(arr[i]!=candidate){
            count--;
        }
    }

    //check if final candidate is more then size/2
    count=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>size/2){
        cout<<"Majority Elements is "<<candidate<<endl;
    }else{
        cout<<"No majority element"<<endl;
    }
}
int main(){

    int arr[7] = {2,1,2,2,3,2,1};
    int size = 7;
    majorityElm2(arr,size);
    return 0;
}