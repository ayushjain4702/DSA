#include<bits/stdc++.h>
using namespace std;


//function overloading
class Sample{
    public:

    void pro(int a,int b){
        cout<<a*b<<endl;
    }

    void pro(int a,int b,int c){
        cout<<a+b+c<<endl;
    }

};

////Operator overloading

class Overload{
    public:
    int num1,num2;
    Overload(int n1,int n2){
        int res;
        this->num1 = n1;
        this->num2 = n2;

        res = num1-num2;
        cout<<"result: "<<res<<endl;   
    }

    void operator-(){
        num1 = -num1;
        num2 = -num2;
    }

    void display(){
        cout<<"num1: "<<num1<<" num2: "<<num2<<endl;
    }
};

class Test{
    public:
    int num;
    Test(){
        num = 8;
    }


    void operator ++(){
        num = num+5;
    }

    void display(){
        cout<<"num is: "<<num<<endl;
    }
};

class Complex{
    public:
    int real,imag;
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int r,int i){
        real =r;
        imag  = i;
    }

    Complex operator + (Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
//Function Overriding

class vehicle{
    public:

    void print(){
        cout<<"This is a vehicle"<<endl;
    }
};

class car : public vehicle{
    public:
    void print(){
        cout<<"This is a car"<<endl;
    }
};

int main(){

    // Sample s;
    // s.pro(10,20);
    // s.pro(10,20,30);

    // Overload o1(10,-5);
    // -o1;
    // o1.display();

    // Test tt;
    // ++tt;
    // tt.display();

    Complex c1(5,4);
    Complex c2(3,5);
    Complex c3;
    c3 = c1+c2;
    c3.print();

    // car c1;
    // c1.print();

    return 0;
}