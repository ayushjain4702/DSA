#include<bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s,string p){
    vector<int> shash(26,0);
    vector<int> phash(26,0);
    int len = s.size();
    int window = p.size();
    vector<int> ans;

    int left=0,right=0;
    if(len<window){
        return ans;
    }

    while(right<window){
        phash[p[right]-'a']++;
        shash[s[right]-'a']++;
        right++;
    }

    right--;
    while(right!=len){
        if(phash == shash){
            ans.push_back(left);
        }
        right++;
        if(right!=len){
            shash[s[right]-'a']++;
        }
        shash[s[left]-'a']--;
        left++;

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return ans;
}

int main(){

    string s = "cbaebabacd";
    string p = "abc";
    findAnagrams(s,p);
   
    return 0;
}