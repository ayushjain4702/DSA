#include<iostream>
using namespace std;

class Complex;



class Calculator{
    public:
    int addReal(Complex ,Complex );
    
     int addImag(Complex ,Complex);
   

};

class Complex{
    int a,b;
    //this allow all functions of calculator to access complex class private members
    // friend class Calculator; 

    //if only some functions of calculator should be allowed to access private members
    friend int Calculator::addReal(Complex ,Complex );
     friend int Calculator::addImag(Complex ,Complex );

    public:
    void setData(int a,int b){
        this->a = a;
        this->b = b;
    }

    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
  
};

int Calculator::addReal(Complex o1,Complex o2){
    return (o1.a+o2.a);
}

int Calculator::addImag(Complex o1,Complex o2){
    return (o1.b+o2.b);
}

int main(){

    Complex c1,c2;
    c1.setData(4,7);
    c1.print();
    c2.setData(6,8);
    c2.print();

    Calculator s;
    int real = s.addReal(c1,c2);
    cout<<real<<endl;

    int i  = s.addImag(c1,c2);
    cout<<i<<endl;


    return 0;
}