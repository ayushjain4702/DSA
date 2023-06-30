#include<bits/stdc++.h>
using namespace std;

//single inheritance
//When one class inherits another class

class Account{   //base class
    public:

    int salary = 50000;
};

class Programmer : public Account{   //derived class
    public:
    int bonus = 10000;
};

//Multilevel Inheritance
//process of deriving a class from another derived class
class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class BullDog:public Dog{
    public:
    void weep(){
        cout<<"Weeping.."<<endl;;
    }
};

//Multiple Inheritance
// process of deriving a new class that inherits the attributes from two or more classes.
class A{
    protected:
    int a;
    public:
    void get_a(int n){
        a = n;
    }
};

class B{
    protected:
    int b;
    public:
    void get_b(int n){
        b = n;
    }
};

class C:public A,public B{
    public:
    void display(){
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b:"<<b<<endl;
        cout<<"value of c: "<<a+b<<endl;
    }
};
//Hierarchical Inheritance
//the process of deriving more than one class from a base class.
class Shape{
    public:
    int a,b;

    void get_data(int n,int m){
        a=n;
        b = m;
    }
};

class Rectangle:public Shape{
    public:
    int rect_area(){
        int res = a*b;
        return res;
    }
};

class triangle:public Shape{
    public:
    float tri_area(){
        float res = 0.5*a*b;
        return res;
    }
};

//Hybrid Inheritance
//combination of more than one type of inheritance.




int main(){

    // Programmer p;
    // cout<<"Salary: "<<p.salary<<endl;
    // cout<<"bonus: "<<p.bonus<<endl;

    // BullDog b;
    // b.eat();
    // b.bark();
    // b.weep();

//     C c;  
//    c.get_a(10);  
//    c.get_b(20);  
//    c.display(); 

    Rectangle r1;
    r1.get_data(10,20);
    cout<<"Area of rectangle: "<<r1.rect_area()<<endl;

    triangle t1;
    t1.get_data(5,7);
    cout<<"Area of triangle: "<<t1.tri_area()<<endl;
    
    return 0;
}