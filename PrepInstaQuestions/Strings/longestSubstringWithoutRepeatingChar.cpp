#include<bits/stdc++.h>
using namespace std;

//Leetcode 3 Medium

int lengthOfLongestSubstring(string s){
    vector<int> dict(128,-1);
    int maxLen = 0;
    int start = -1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start){
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen,i-start);
    }
    return maxLen;
}

int main(){

    string s = "pwwkew";
    int ans = lengthOfLongestSubstring(s);
    cout<<ans<<endl;
    return 0;
}