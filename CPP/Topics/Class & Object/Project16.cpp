//**C++ Program to enter student details by Passing parameters to constructors

// #include <iostream>
// #include <string.h>

// using namespace std;

// class data
// {
// private:
//     int roll, marks;
//     char name[10];

// public:
//     data(char stud[], int rll, int mark)
//     {
//         strcpy(name, stud);
//         roll = rll;
//         marks = mark;
//     }

//     void showdata()
//     {
//         cout << "STUDENT NAME: " << name << endl
//              << "STUDENT MARKS: " << marks << endl
//              << "STUDENT ROLL NO: " << roll << endl;
//     }
// };

// int main()
// {
//     char name[10];
//     // char name[]="ankit";
//     cout << "ENTER STUDENT NAME: " << endl;
//     cin >> name;

//     data student(name, 01, 100);
//     student.showdata();
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>
#include <cstring>

class data
{
private:
    char name[20];
    int roll, marks;

public:
    data(char *p, int r, int m)
    {
        strcpy(name, p);
        roll = r;
        marks = m;
    }

    void write()
    {
        std::cout << "NAME: " << name << std::endl
                  << "ROLL_NUMBER: " << roll << std::endl
                  << "MARKS: " << marks << std::endl;
    }
};

int main()
{
    char name[20];

    std::cout << "ENTER YOUR NAME:" << std::endl;
    std::cin.getline(name, 20);

    data obj(name, 12, 100);
    obj.write();

    return (0);
}