//**C program to find nearest lesser and greater element in an array

#include <iostream>

void find_max(int num[], int count, int key)
{
    int flag = 0;
    int temp = key;

    for (int i = 0; i < count; i++) //? we can also use sorted array and after getting first max, take break.
    {

        if (key < num[i] && flag == 0)
        {
            key = num[i];
            flag++;
        }

        if (temp < num[i] && key > num[i] && flag != 0)
        {
            key = num[i];
        }
    }

    std::cout << "NEAREST MAXIMIM IS: " << key << std::endl;
    return;
}

void find_min(int *p, int count, int key)
{
    int temp = key;
    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (*(p + i) < key && flag == 0)
        {
            flag++;
            key = *(p + i);
        }

        if (temp > *(p + i) && *(p + i) > key && flag != 0)
        {
            key = *(p + i);
        }
    }

    std::cout << "NEAREST MINMUM: " << key << std::endl;
    return;
}

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY ELEMETS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int flag;
    std::cout << "ENTER REFERENCE NUMBER: " << std::endl;
    std::cin >> flag;

    find_max(num, count, flag);
    find_min(num, count, flag);

    return (0);
}