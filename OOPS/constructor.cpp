#include<bits/stdc++.h>
using namespace std;

class Book{

    private:
    
    int pages;
    
    public:

    //default constructor
    Book(){
        pages = 250;
        cout<<"The name of book is 13 reasons why"<<endl;
        cout<<"Total no. of pages: "<<pages<<endl;
    }
};

class Bar{

    private:
    int people;
    int drink;

    public:

    //Parameterised Constructor
    Bar(int p,int d){
        this->people = p;
        this->drink = d;
    }

    int total_cash(){
        return people*drink; 
    }
};

class Overload{
    int res;

    public:

    //Constructor Overloading 
    Overload(int x,int y){
        res = x*y;
    }

    Overload(int x,int y,int z){
        res = x+y+z;
    }

    int result(){
        return res;
    }

};

//copy constructor
class Sample{
     public:
    int id;

   
    Sample(int x){
        id = x;
    }

    void display(){
        cout<<id<<endl;
    }

    

    Sample(const Sample &s){
        id = s.id +1;
    }
};



int main(){

    // Book b1;

    // Bar bar1(100,20);
    // cout<<"Total cash: "<<bar1.total_cash();

    // Overload O1(10,10);
    // Overload O2(10,10,10);

    // cout<<"Multication of 2 no. is "<<O1.result()<<endl;
    // cout<<"Addition of 3 no. is "<<O2.result()<<endl;

    Sample s1(10);   //shallow copy
    s1.display();
    

    Sample s2(s1);
    s2.display();

    return 0;
}