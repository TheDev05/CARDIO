//**C++ program to display Student details using class

// #include <iostream>
// using namespace std;

// class data
// {
// private:
//     char name[20];
//     int roll, marks;

// public:
//     void setdata()
//     {
//         cout << "ENTER STUDENT NAME: " << endl;
//         cin >> name;
//         cout << "ENTER STUDENT ROLL NUMBER: " << endl;
//         cin >> roll;
//         cout << "ENTER STUDENT MARKS: " << endl;
//         cin >> marks;
//     }

//     void showdata()
//     {
//         cout << "************************" << endl
//              << "NAME: " << name << endl
//              << "ROLL: " << roll << endl
//              << "MARKS: " << marks << endl;
//     }
// };

// int main()
// {
//     data stud1, stud2;
//     stud1.setdata();
//     stud2.setdata();

//     stud1.showdata();
//     stud2.showdata();
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*
//TODO: RIVISE NEEDED

#include <iostream>
#include <ios>

class data
{
private:
    char name[20];
    int roll;
    int marks;

public:
    void read()
    {
        getchar();
        // std::cin.get();
        // std::cin.ignore();

        std::cout << "ENTER STUDENT NAME: " << std::endl;
        std::cin.getline(name, 20);

        std::cout << "ENTER STUDENT ROLL NUMBER: " << std::endl;
        std::cin >> roll;

        std::cout << "ENTER STUDENT MARKS:" << std::endl;
        std::cin >> marks;
    }

    void write()
    {
        std::cout << "STUDENT NAME: " << name << std::endl;
        std::cout << "ROLL NUMBER: " << roll << std::endl;
        std::cout << "MARKS: " << marks << std::endl;
    }

    void find(int find_roll)
    {

        if (find_roll == roll)
        {
            write();
            return;
        }
    }
};

int main()
{
    int count;
    std::cout << "ENTER NUMBER OF STUDENTS: " << std::endl;
    std::cin >> count;

    data num[count];
    for (int i = 0; i < count; i++)
    {
        num[i].read();
    }

    int find_roll;
    std::cout << "ENTER THE ROLL U WANNA FIND: " << std::endl;
    std::cin >> find_roll;

    for (int i = 0; i < count; i++)
    {
        num[i].find(find_roll);
    }

    return (0);
}
