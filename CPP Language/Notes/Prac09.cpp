// ** CREATING MEMBER FUNCTION OUTSIDE CLASS
// ** 20.03.21

#include <iostream>
using namespace std;

class stud_record
{
public:
    char name[20];
    int marks;
    int roll_no;

    void setdata()
    {
        cout << "ENTER STUDENT NAME:" << endl;
        cin >> name;
        // fflush(stdin);

        cout << "ENTER STUDENT ROLL NUMBER:" << endl;
        cin >> roll_no;

        cout << "ENTER STUDENT MARKS:" << endl;
        cin >> marks;
    }

    void showdata();
};

stud_record student1;

int main()
{

    student1.setdata();
    student1.showdata();
    return (0);
}

void stud_record::showdata()
{
    cout << "STUDENT NAME :"
         << student1.name << endl
         << "ROLL NUMBER: "
         << student1.roll_no << endl
         << "MARKS: "
         << student1.marks << endl;
}