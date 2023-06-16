#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[] = {1,2,4,1,2,5,4,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    map<int,int> m;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }

    for(auto itr:m){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}