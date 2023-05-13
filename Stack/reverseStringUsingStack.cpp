#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "ayush";
    stack<char> st;

    for(int i=0;i<s.size();i++){
        char ch = s[i];
        st.push(ch);
    }

    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"Reverse of "<<s<<" is "<<ans;
    return 0;
}