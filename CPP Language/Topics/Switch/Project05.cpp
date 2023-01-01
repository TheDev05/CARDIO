//**C++ Program to find a Grade of Given Marks Using Switch Case

#include <iostream>

int main()
{
    int marks;

    std::cout << "ENTER YOUR MARKS: " << std::endl;
    std::cin >> marks;

    switch (marks/10)//! IMPOERTANT
    {
    case 10:
        std::cout << "EXCELLENT, MARKS: 100, GARDE: A+";
        break;

    case 9:
        std::cout << "MARKS: 90-100, GARDE: A";
        break;
    case 8:
        std::cout << "MARKS: 80-90, GRDAE: B+";
        break;
    case 7:
        std::cout << "MARKS: 70-80, GRADE: B";
        break;
    default:
        std::cout << "INAVLID ENTRY";
        break;
    }

    return (0);
}