#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,string> m;
    m[1] = "abc";   //O(logn)  for each insertion
    m[5] = "pqr";
    m[7] = "mno";

    m.insert({4,"xyz"});

    // map<int,string> :: iterator it;
    // for(it = m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    //find 
    auto itr = m.find(10);
    if(itr==m.end()){
        cout<<"No value"<<endl;
    }else{
         cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }


    return  0;
}