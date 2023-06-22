#include<bits/stdc++.h>
using namespace std;

string convert(string s){
    
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='z'){
            st.push(string(1,s[i]));   // to convert char into string
        }else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push(s[i] + op2 + op1);
        }
    }
    return st.top();
}

int main(){

    string postfix = "ABC/-AK/L-*";
    cout<<postfix<<endl;
    string prefix = convert(postfix);
    cout<<prefix<<endl;
    return 0;
}