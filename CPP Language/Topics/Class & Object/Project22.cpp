//**C++ program to create a class for student to get and print details of N students.
//**C++ program to demonstrate example of array of objects.

#include <iostream>
using namespace std;

class data
{
private:
    int marks;
    char name[20];

public:
    int roll;
    void setdata()
    {
        fflush(stdin);
        cout << "ENTER STUDENT NAME: " << endl;
        cin >> name;
        fflush(stdin);
        cout << "ENTER STUDENT ROLL NUMBER: " << endl;
        cin >> roll;
        fflush(stdin);
        cout << "ENTER STUDENT MARKS: " << endl;
        cin >> marks;
    }

    void find(int total)
    {
        int search;
        cout << "ENTER THE ROLL YOU WANNA FIND DEATILS: " << endl;
        cin >> search;

        for (int i = 0; i < total; i++)
        {
            if (search == roll)
            {
                cout << "STUDENT NAME: " << name << endl
                     << "STUDENT ROLL NUMBER: " << roll << endl
                     << "STUDENT MARKS: " << marks << endl;

                break;
            }
        }
    }
};

int main()
{
    int total, search;
    data detail[20];

    cout << "ENTER THE TOTAL NUMBER OF STUDENTS YOU WANNA STORE DATA: " << endl;
    cin >> total;

    for (int i = 0; i < total; i++)
    {
        detail[i].setdata();
    }

    for (int i = 0; i < total; i++)
    {
        detail[i].find(total);
    }

    return (0);
}
