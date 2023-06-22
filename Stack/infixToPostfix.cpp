#include<bits/stdc++.h>
using namespace std;

int precedence(char ch){

    if(ch=='+' || ch== '-'){
        return 1;
    }else if(ch=='*' || ch== '/'){
        return 2;
    }else if(ch=='^'){
        return 3;
    }else{
        return 0;
    }
}

string convert(string s){

        stack<char> st;
        string ans;

        for(int i=0;i<s.size();i++){
            
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                ans.push_back(s[i]);
            }else if(s[i]=='('){
                st.push(s[i]);
            }else if(s[i]==')'){
                while(!st.empty() && st.top() != '('){
                    ans.push_back(st.top());
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }else{
                while(!st.empty() && precedence(st.top()) >= precedence(s[i])){
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
        return ans;
}

int main(){

    string infix = "((a+(b*c))-d)";
    string postfix;
    cout<<infix<<endl;
    postfix = convert(infix);
    
    cout<<postfix<<endl;

    return 0;
}