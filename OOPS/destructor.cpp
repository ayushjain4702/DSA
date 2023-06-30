#include<bits/stdc++.h>
using namespace std;

class Distance{

    int speed;
    int time;

    public:
    Distance(int s,int t){
        cout<<"This is constructor"<<endl;
        this->speed = s;
        this->time = t;
    }

  

    void display(){
        cout<<"Distance: "<<speed*time<<endl;
    }
    
    ~ Distance(){
        cout<<"This is destructor"<<endl;
    }

    
};

int main(){

   Distance d1(100,2);
   d1.display();

    return 0;
}