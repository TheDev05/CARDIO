//** CLASS AND OBJECT PRACTICE
//** 20.03.21

#include <iostream>
using namespace std;
class record
{
public: //? **BY DEFAULT CLASS MEMBERS IS PRIVATE.
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    record student1;

    cout << "ENTER STUDENT NAME:" << endl;
    cin >> student1.name;

    // fflush(stdin);

    cout << "ENTER STUDENT ROLL NUMBER:" << endl;
    cin >> student1.roll_no;

    // fflush(stdin);

    cout << "ENTER STUDENT MARKS:" << endl;
    cin >> student1.marks;

    cout << "****STUDENT DEATILS:***" << endl;
    cout << "NAME:" << student1.name << endl;
    cout << "STUDENT ROLL:" << student1.roll_no << endl;
    cout << "STUDENT MARKS:" << student1.marks << endl;

    return (0);
}
