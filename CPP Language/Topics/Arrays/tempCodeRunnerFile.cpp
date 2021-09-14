#include <iostream>

int main()
{
    int count;
    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    std::cout << "ENTER ARRAY EKEMSNTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int max = 0, min = 0;

    for (int i = 0; i < count; i++)
    {
        if (max < num[i])
        {
            min = max;
            max = num[i];
        }
        else if (min < num[i] && max > num[i])
        {
            min = num[i];
        }
    }

    std::cout << "MAX01: " << max << std::endl
              << "MIN01: " << min;
    return (0);
}