//**C++ Program To Print Reverse Order And Print Sum Of Its Element Of An Array

#include <iostream>
void reverse(int num[], int);

int main()
{
    int count, num[20];

    std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += num[i];
    }

    std::cout << "SUM OF ELEMEMTS: " << sum << std::endl;

    reverse(num, count);

    std::cout << "REVERSE ORDER OF ELEMENTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i]<<" ";
    }

    return (0);
}

void reverse(int num[], int count)
{
    int temp;
    for (int i = 0; i < count / 2; i++)
    {
        temp = num[i];
        num[i] = num[count - 1 - i];
        num[count - 1 - i] = temp;
    }
}