//*CPP-STRUCTURE*

#include <iostream>

struct data
{
    int roll;
    char name[20];
    int marks;
};

data read(data temp)
{
    std::cout << "ENTER STUDENT NAME: " << std::endl;
    std::cin.getline(temp.name, 20);

    std::cout << "ENTER STUDENT ROLL_NUMBER: " << std::endl;
    std::cin >> temp.roll;

    std::cout << "ENTER STUDENT MARKS: " << std::endl;
    std::cin >> temp.marks;

    return (temp);
}

void write(data temp)
{
    std::cout << "NAME: " << temp.name << std::endl;
    std::cout << "ROLL_NUMBER: " << temp.roll << std::endl;
    std::cout << "MARKS: " << temp.marks << std::endl;
    return;
}

int main()
{
    data stud1, stud2;

    stud2 = read(stud1);
    write(stud2);

    return (0);
}