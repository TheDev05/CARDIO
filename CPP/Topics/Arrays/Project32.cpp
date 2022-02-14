//**C program to delete given element from one dimensional array.

#include <iostream>
int main()
{
    int count;

    std::cout << "ENTER INPUT COUNT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int remove;
    std::cout << "ENTER THE NUMER YOU WNNA REMOVE: " << std::endl;
    std::cin >> remove;

    for (int i = 0; i < count; i++)
    {
        if (remove == num[i])
        {
            while (i < count)
            {
                num[i] = num[i + 1];
                i++;
            }
            count--;
            break;
        }
    }
    std::cout << "AFTER REMOVING " << remove << " ARRAY IS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}