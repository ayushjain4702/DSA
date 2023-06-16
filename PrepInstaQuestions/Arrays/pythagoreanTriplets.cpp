#include<bits/stdc++.h>
using namespace std;

void triplets(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
    for(int i = n-1;i>=2;i--){
        int c = i;
        int a = 0;
        int b = i-1;

        while(a<b){
            if(arr[a]+arr[b] == arr[c]){
                cout<<sqrt(arr[a])<<" "<<sqrt(arr[b])<<" "<<sqrt(arr[c])<<endl;
                break;
            }else if(arr[a]+arr[b] > arr[c]){
                b--;
            }else{
                a++;
            }
        }
        
    }
}

int main(){

    int arr[] = {  3, 8, 4, 10, 6, 5, 12, 13, 27, 117, 165, 19, 176, 169, 44, 113, 24, 145, 
       143, 51, 149, 52, 173, 181, 125 };
    int n = sizeof(arr)/sizeof(arr[0]);

    triplets(arr,n);
   
    return 0;
}