//**C++ Program For Calculate Percentage Of 5 Subjects

#include <iostream>

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    int total;

    float per;

    std::cout << "ENTER MARKS FOR 5 SUBJECT RESPECTIVELY: " << std::endl;
    std::cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    std::cout << "ENTER TOTAL MARKS: " << std::endl;
    std::cin >> total;

    per = ((sub1 + sub2 + sub3 + sub4 + sub5) * 100) / total;

    std::cout << "PERCENTAGE IS: " << per << " %" << std::endl;
    return (0);
}