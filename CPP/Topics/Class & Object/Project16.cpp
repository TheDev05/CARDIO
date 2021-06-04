//**C++ Program to enter student details by Passing parameters to constructors

#include <iostream>
#include <string.h>

using namespace std;

class data
{
private:
    int roll, marks;
    char name[10];

public:
    data(char stud[], int rll, int mark)
    {
        strcpy(name, stud);
        roll = rll;
        marks = mark;
    }

    void showdata()
    {
        cout << "STUDENT NAME: " << name << endl
             << "STUDENT MARKS: " << marks << endl
             << "STUDENT ROLL NO: " << roll << endl;
    }
};

int main()
{
    char name[10];
    // char name[]="ankit";
    cout << "ENTER STUDENT NAME: " << endl;
    cin >> name;

    data student(name, 01, 100);
    student.showdata();
    return (0);
}