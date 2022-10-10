//**Create a class named 'Student' with a string variable 'name' and an
// integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    char name[10];
    int roll_no;

public:
    student(char stud_name[], int roll)
    {
        strcpy(name, stud_name);
        roll_no = roll;
    }
    void showdata()
    {
        cout << "STUDENT NAME: " << endl
             << name << endl;
        cout << "STUDENT ROLL NUMBER: " << endl
             << roll_no << endl;
    }
};

int main()
{
    char name[10];
    student obj1(strcpy(name, "John"), 2);
    obj1.showdata();
    return (0);
}