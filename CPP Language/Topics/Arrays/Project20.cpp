//**C program to delete prime numbers from an array.
//TODO: RIVIOSON NEEDED


#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];

    std::cout << "ENTER ARRAY ELEEMNTS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        int key = 0;
        int res_i = i;

        for (int j = 2; j <= 9; j++)
        {
            if ((num[i] % j == 0) && (num[i] != j))
            {
              key++;
            }
        }

        if (key == 0)
        {
            while (i < count)
            {
                num[i] = num[i + 1];
                i++;
            }

            count--;
            i = res_i-1;
        }
    }

    std::cout << "AFER DELETING ALL PRIMES: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }
    return (0);
}