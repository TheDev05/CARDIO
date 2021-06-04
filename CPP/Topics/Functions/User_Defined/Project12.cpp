//**C program to pass multiple type of arguments to a function.

#include <iostream>

void show_data(char *name, int roll, float marks)
{
    std::cout << "NAME: " << name << std::endl
              << "ROLL NUMBER: " << roll << std::endl
              << "MARKS: " << marks << std::endl;
    return;
}

int main()
{
    char name[20];

    std::cout << "ENTER YOUR NAME: " << std::endl;
    std::cin.getline(name, 20);

    int roll;
    float marks;

    std::cout << "ENTER ROLL NUMBER:" << std::endl;
    std::cin >> roll;

    std::cout << "ENTER MARKS:" << std::endl;
    std::cin >> marks;

    show_data(name, roll, marks);
    return (0);
}