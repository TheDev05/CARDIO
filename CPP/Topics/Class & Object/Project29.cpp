//**Assign and print the roll number, phone number and address of two
// students having names "Sam" and "John" respectively by creating two
// objects of the class 'Student'.

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

class student
{
private:
    int roll, contact;
    char name[10];
    std::string address;

public:
    student(char stud_name[])
    {
        strcpy(name, stud_name);

        std::cout << "ENTER ROLL OF " << name << std::endl;
        std::cin >> roll;

        std::cout << "ENTER CONTACT NUMBER: " << std::endl;
        std::cin >> contact;
        fflush(stdin);
        std::cout << "ENTER ADDRESS OF " << name << std::endl;
        std::getline(std::cin, address);
    }

    void showdata()
    {
        std::cout << "STUDENT NAME: " << name << std::endl
                  << "STUDENT ROLL: " << roll << std::endl
                  << "STUDENT CONTACT: " << contact << std::endl
                  << "STUDENT ADDRESS: " << address << std::endl
                  << "***************************************************" << std::endl;
    }
};

int main()
{
    char name[10];
    student obj1(strcpy(name, "Sam")), obj2(strcpy(name, "John"));

    obj1.showdata();
    obj2.showdata();
    return (0);
}