//**C program to pass an array of structure to a user-defined function

#include <iostream>

struct marks
{
    char name[20];
    int roll;
    int marks;
};

void showResult(struct marks *temp, int count)
{
    int roll;
    std::cout << "ENTER ROLL NUMBERS TO GET STUDENT MARKS: " << std::endl;
    std::cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (temp[i].roll == roll)
        {
            std::cout << "NAME: " << temp[i].name << std::endl
                      << "MARKS: " << temp[i].marks << std::endl
                      << "ROLL: " << temp[i].roll << std::endl;

            return;
        }
    }
}

int main()
{
    int count;

    std::cout << "ENTER NUMBER OF STUDENTS: " << std::endl;
    std::cin >> count;

    struct marks class1[5];

    for (int i = 0; i < count; i++)
    {
        fflush(stdin);
        std::cout << "ENTER STUDENT NAME: " << std::endl;
        std::cin.getline(class1[i].name, 20);

        std::cout << "ENTER STUDENT ROLL NUMBER: " << std::endl;
        std::cin >> class1[i].roll;

        std::cout << "ENTER STUENT MARKS: " << std::endl;
        std::cin >> class1[i].marks;
    }

    showResult(class1, count);

    return (0);
}