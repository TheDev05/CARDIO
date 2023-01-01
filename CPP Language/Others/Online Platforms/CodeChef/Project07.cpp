/* Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

LINK: https://www.codechef.com/problems/MATCHES */
// TODO: IMPORTANT : LOGIC AREA

#include <iostream>
int main()
{
    int data[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int count;
    std::cin >> count;

    int num[count][2];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin >> num[i][j];
        }
    }

    for (int i = 0; i < count; i++)
    {
        int value = num[i][0] + num[i][1];
        int temp = value;
        int sum = 0;

        for (int j = 0; temp != 0; j++)
        {
            int res = temp % 10;

            sum += data[res];

            temp = temp / 10;
        }

        std::cout << sum << std::endl;
    }

    return (0);
}