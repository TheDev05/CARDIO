//**C program to find the first repeated element in an array.

#include <iostream>
int main()
{
    int count;
    std::cout << "ENTER INPUT COUNT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMNST: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (num[i] == num[j])
            {
                std::cout << "FIRST REPEATED ELEMENTS IS: " << num[i];
                return (0);
            }
        }
    }

    return(0);
}