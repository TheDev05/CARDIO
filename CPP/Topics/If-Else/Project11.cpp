//**C++Program To Check Date Validation (Valid Or Not) Using If/Else Statements

#include <iostream>

int main()
{
    int day, mon, year;

    std::cout << "ENTER YEAR FIRST THEN MONTH THEN DATE; " << std::endl;
    std::cin >> year >> mon >> day;

    int key = 0;

    if (year > 1000 && year < 3000)
    {
        if (mon >= 1 && mon <= 12)
        {
            if (day >= 1 && day <= 31)
            {
                std::cout << "DATE IS VALIDATE" << std::endl;
                key++;
            }
        }
    }
    if (key == 0)
    {
        std::cout << "DATE IS NOT VALIDATE" << std::endl;
    }

    return (0);
}