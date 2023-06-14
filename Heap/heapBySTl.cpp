#include<bits/stdc++.h>
using namespace std;   

int main(){

    //max-heap
    priority_queue<int> pq;
    
    pq.push(45);
    pq.push(36);
    pq.push(47);
    pq.push(56);
    pq.push(49);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(45);
    minheap.push(36);
    minheap.push(47);
    minheap.push(56);
    minheap.push(49);
    cout<<minheap.top()<<endl;
    minheap.pop();
    cout<<minheap.top()<<endl;

}