//**C++ Program To Check An Array Is Armstrong Or Not(not its indiviual elelments..here treating whole array as a number)

#include <iostream>
#include <cmath>

int main()
{
    int num[20];
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int sum = 0;

    for (int i = 0; i < count; i++)//? sum of power(as of count) of number.
    {
        sum += pow(num[i], count);
    }

   

    int rem, key = 0, res[20];

    for (int i = 0; sum != 0; i++)//? splitting and storing in nother array
    {
        res[i] = sum % 10;

        sum = sum / 10;
    }

    for (int i = 0; i < count; i++)
    {
        if (res[count-1-i]==num[i]) //? IMPORATNT: number which is splitted is actually split in backward direction ..as 421 as 1..2..4
        {
            key++;
        }
        
    }

    if (key==count)
    {
        std::cout<<" ARRAY(TAKEN AS A NUMBER) IS ARMSTRONG";
    }
    
    
    return (0);
}