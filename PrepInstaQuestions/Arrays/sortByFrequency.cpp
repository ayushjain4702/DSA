#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a,pair<int,int> b){
    if(a.second<b.second){
        return true;
    }else if(a.second>b.second){
        return false;
    }else{
        return a.first>=b.first;
    }
}

void func(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> vp;
    for(auto itr:m){
        vp.push_back({itr.first,itr.second});
    }
    sort(vp.begin(),vp.end(),mycmp);
    vector<int> ans;
    for(auto itr:vp){
        int x = itr.first;
        int f = itr.second;

        while(f!=0){
            ans.push_back(x);
            f--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,2,2,1,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    func(arr,n);
    

    return 0;
}