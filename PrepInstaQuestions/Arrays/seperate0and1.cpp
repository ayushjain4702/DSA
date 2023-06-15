#include<bits/stdc++.h>
using namespace std;

// int main(){

//     int arr[] = {0,1,0,1,1,1,0};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int countZeros = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             countZeros++;
//         }
//     }
//     for(int i=0;i<countZeros;i++){
//         arr[i] = 0;
//     }
//     for(int i=countZeros;i<n;i++){
//         arr[i] =1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


//two pointer approach
int main(){

    int arr[] = {1,0,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}