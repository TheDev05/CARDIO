//**C++ program to display Student details using class

#include <iostream>
using namespace std;

class data
{
private:
    char name[20];
    int roll, marks;

public:
    void setdata()
    {
        cout << "ENTER STUDENT NAME: " << endl;
        cin >> name;
        cout << "ENTER STUDENT ROLL NUMBER: " << endl;
        cin >> roll;
        cout << "ENTER STUDENT MARKS: " << endl;
        cin >> marks;
    }

    void showdata()
    {
        cout << "************************" << endl
             << "NAME: " << name << endl
             << "ROLL: " << roll << endl
             << "MARKS: " << marks << endl;
    }
};

int main()
{
    data stud1, stud2;
    stud1.setdata();
    stud2.setdata();

    stud1.showdata();
    stud2.showdata();
    return (0);
}