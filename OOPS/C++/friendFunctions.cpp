#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:

    //friend function
    //Below func is allowed to acces my private members
    friend Complex sumData(Complex o1,Complex o2);

    void setData(int a,int b){
        this->a = a;
        this->b = b;
    }

    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex sumData(Complex o1,Complex o2){
    Complex temp;
    temp.setData((o1.a + o2.a),(o1.b+o2.b));

    return temp;
}
int main(){

    Complex c1,c2,sum;
    c1.setData(2,5);
    c1.print();

    c2.setData(4,7);
    c2.print();

    sum = sumData(c1,c2);
    sum.print();

    return 0;
}