//*C program to demonstrate example of nested structure.

#include <iostream>

struct month
{
    int jan;
    int feb;
};

struct data
{
    char name[20];
    int age;
    struct month salary;
};

int main()
{
    data emp1;

    std::cout << "ENTER EMPLOYEE NAME: " << std::endl;
    std::cin.getline(emp1.name, 20);

    std::cout << "ENTER AGE: " << std::endl;
    std::cin >> emp1.age;

    std::cout << "ENTER SALARY PAID IN JANUARY: " << std::endl;
    std::cin >> emp1.salary.jan;

    std::cout << "ENTER SALARY PAID IN DEBUARY: " << std::endl;
    std::cin >> emp1.salary.feb;

    std::cout << "NAME: " << emp1.name << std::endl
              << "AGE: " << emp1.age << std::endl
              << "SALARY_JAN: " << emp1.salary.jan << std::endl
              << "SALARY_FEB: " << emp1.salary.feb;

    return (0);
}