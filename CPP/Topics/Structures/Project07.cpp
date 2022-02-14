//**C program to demonstrate example of structure pointer (structure with pointer)

#include <iostream>
#include <cstring>

struct data
{
    char name[20];
    int age;
    int roll;
};

void show(data *p)
{
    std::cout << "STUDENT NAME: " <<p->name << std::endl
              << "AGE: " << p->age << std::endl
              << "ROLL: " << p->roll << std::endl;
    return;
}

int main()
{
    data stud;
    data *p;
    p = &stud;

    strcpy(stud.name, "ANKIT RAJ");
    stud.age = 18;
    stud.roll = 9281;

    show(p);
    return (0);
}