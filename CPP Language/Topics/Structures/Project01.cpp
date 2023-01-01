//*8C++ Program For Store Employee Information And Display Using Structure

#include <iostream>

struct data
{
    char name[10], design[20];
    int id_num, dob;
};

int main()
{
    data emp;

    std::cout << "ENTER EMPLOYEE NAME: " << std::endl;
    std::cin.getline(emp.name, 10);

    std::cout << "ENTER EMPLLOYEE DATE OF BIRTH: " << std::endl;
    std::cin >> emp.dob;

    std::cout << "ENTER DESIGNATION: " << std::endl;
    std::cin >> emp.design;

    std::cout << "ENTER EMPLOYEE ID NUMBER: " << std::endl;
    std::cin >> emp.id_num;

    std::cout << "NAME: " << emp.name << std::endl
              << "ID NUMBER: " << emp.id_num << std::endl
              << "DESINATION: " << emp.design << std::endl
              << "DATE OF BIRTH: " << emp.dob << std::endl;

    return (0);
}