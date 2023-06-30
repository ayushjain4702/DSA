#include<bits/stdc++.h>
using namespace std;

class Company{
    private:
    int salary;

    public:

    void setSalary(int fulltime,int overtime){
        this->salary = fulltime+ overtime;
    }

    int getSalary(){

        return salary;
    }
};

int main(){

    Company emp1;
    emp1.setSalary(100000,20000);
    cout<<"Total Salary of employee: "<<emp1.getSalary()<<endl;

    return 0;
}