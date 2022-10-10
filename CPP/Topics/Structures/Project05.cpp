//**C program to create, declare and initialize structure.

#include <iostream>

struct data
{
    char name[20];
    int age;
    int reg_no;
};

void find(data temp[], int count)
{
    int key;
    std::cout << "ENTER REG NO OF EMPLOYEE: " << std::endl;
    std::cin >> key;

    for (int i = 0; i < count; i++)
    {
        if (key == temp[i].reg_no)
        {
            std::cout << "NAME: " << temp[i].name << std::endl
                      << "AGE: " << temp[i].age << std::endl
                      << "REG NUMBER: " << temp[i].reg_no << std::endl;
        }
    }
}

int main()
{
    int count;
    std::cout << "ENTER THE NUMBER OF EMPLOYEES: " << std::endl;
    std::cin >> count;

    data emp[count];

    for (int i = 0; i < count; i++)
    {
        std::cin.ignore();

        std::cout << "ENTER EMPLOYEE NAME: " << std::endl;
        std::cin.getline(emp[i].name, 20);

        std::cout << "ENTER EMPLOYEE AGE: " << std::endl;
        std::cin >> emp[i].age;

        std::cout << "ENTER EMPLOYEE REG NUMBER: " << std::endl;
        std::cin >> emp[i].reg_no;
    }

    find(emp, count);

    return (0);
}