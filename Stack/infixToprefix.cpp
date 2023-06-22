#include<bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='^'){
        return 3;
    }else if(ch=='*' || ch=='/'){
        return 2;
    }else if(ch=='+' || ch=='-'){
        return 1;
    }else{
        return 0;
    }
}

string convert(string s){

    string ans;
    stack<char> st;

    reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')){
            ans.push_back(s[i]);
        }else if(s[i]==')'){
            st.push(s[i]);
        }else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                ans.push_back(st.top());
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top()) >= prec(s[i])){
                ans.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());

    return ans;
}

int main(){


    string infix = "(P+(Q*R)/(S-T))";
    string prefix;
    cout<<infix<<endl;
    prefix = convert(infix);
    
    cout<<prefix<<endl;
    return 0;
}