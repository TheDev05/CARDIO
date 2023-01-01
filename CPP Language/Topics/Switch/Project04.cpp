//**C++ Program To Find A Grade Of Given Numbers Using Switch Case

#include <iostream>

int main()
{
    char grade;
    std::cout << "ENTER YOUR GRADE A, B OR C: " << std::endl;
    std::cin >> grade;

    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        std::cout << "MARKS: 9-10";
        break;
    case 'B':
        std::cout << "MARKS: 8-9";
        break;
    case 'C':
        std::cout << "MARKS: 7-8";
        break;
    default:
        std::cout << "INVALID INPUT";
        break;
    }

    return (0);
}