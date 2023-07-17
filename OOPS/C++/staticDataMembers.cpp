#include <iostream>

using namespace std;

class Add
{
    int id;
    static int count; // By default value is 0

public:
    void setData(int id)
    {
        this->id = id;
        count++;
    }

    void getData()
    {
        cout << id << " " << count << endl;
    }

    void static getCount()
    { // static functions can only access static variables
        cout << "Employee Count is " << count << endl;
    }
};

int Add ::count;

int main()
{
    // count is static data member of class Add
    Add emp1, emp2, emp3; // All 3 obj will access oly 1 copy of count var

    emp1.setData(101);
    emp1.getData();
    Add::getCount();

    emp2.setData(102);
    emp2.getData();
    Add::getCount();

    emp3.setData(103);
    emp3.getData();
    Add::getCount(); // static func is used by calling class ,rather then obj

    return 0;
}
