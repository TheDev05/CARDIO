//**C program for passing structures as function arguments and returning a structure from a function.

#include <iostream>
#include <cstring>

struct stud_data
{
    char name[20];
    int age;
    int roll;
};

stud_data getdata()
{

    stud_data temp;

    strcpy(temp.name, "ANKIT RAJ");
    temp.age = 18;
    temp.roll = 9281;

    return (temp);
}

int main()
{
    stud_data stud2;

    stud2 = getdata();

    std::cout << "NAME: " << stud2.name << std::endl
              << "AGE: " << stud2.age << std::endl
              << "ROLL: " << stud2.roll << std::endl;

    return (0);
}