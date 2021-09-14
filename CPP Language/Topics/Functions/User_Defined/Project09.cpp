//**C program to pass a structure to a user define function.

#include <iostream>

struct data
{
    char name[20];
    int emp_ID;
    int emp_age;
};

void showdata(struct data temp)
{
    std::cout << "EMPLOYEE NAME: " << temp.name << std::endl
              << "EMPLOYEE ID: " << temp.emp_ID << std::endl
              << "EMPLOYEE AGE: " << temp.emp_age << std::endl;
}

int main()
{
    struct data obj1;

    std::cout << "ENTER EMPLOYEE NAME: " << std::endl;
    std::cin.getline(obj1.name, 20);

    std::cout << "ENTER EMPLOYEE ID: " << std::endl;
    std::cin >> obj1.emp_ID;

    std::cout << "ENTER EMPLOYEE AGE: " << std::endl;
    std::cin >> obj1.emp_age;

    showdata(obj1);

    return (0);
}