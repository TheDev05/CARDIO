//**C++ Program To find Average Of Array elemnts using Function and Pointer

#include <iostream>
float avg(int *, int);

int main()
{
    int num[20], count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER " << count << " NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "AVERAGE OF ARRAY ELEMENTS: " << avg(num, count) << std::endl;
    return (0);
}

float avg(int *p, int count)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(p + i);
    }

    sum = sum / (count);
    return (sum);
}