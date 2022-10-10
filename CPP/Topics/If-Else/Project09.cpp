//**C++Program To Check Age Between 40 To 60 Using If/Else Statements

#include <iostream>

int main()
{
    int age[10], count;

    std::cout << "ENTER HOW ANY AGES YOU WANNA CHECK: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER AGE OF " << count << " PEOPLE" << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cin >> age[i];
    }

    int key = 0;
    for (int i = 0; i < count; i++)
    {
        if (age[i] > 40 && age[i] < 60)
        {
            key++;
        }
    }

    std::cout << "TOTAL PERSON HAVING AGE BETWEEN 40 TO 60 IS: " << key << std::endl;
    return (0);
}
