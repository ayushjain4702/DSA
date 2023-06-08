#include<bits/stdc++.h>
using namespace std;

int main(){

   //create a queue
   queue<int> q;

   q.push(10);
   q.push(20);
   q.push(30);
   cout<<q.front()<<endl;
   cout<<q.back()<<endl;
   cout<<q.size()<<endl;
   q.pop();
   cout<<q.front()<<endl;
   cout<<q.back()<<endl;
   cout<<q.size()<<endl;
    q.pop();
    q.pop();
   if(q.empty()){
    cout<<"Queue is empty"<<endl;
   }else{
    cout<<"Queue is not empty"<<endl;
   }

   return 0;
}