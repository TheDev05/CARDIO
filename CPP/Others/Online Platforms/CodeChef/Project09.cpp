/* */

#include <iostream>
int main()
{
    int test_cases;
    std::cin >> test_cases;

    int wolverins[test_cases];

    for (int i = 0; i < test_cases; i++)
    {

        int character, inc_charcter, wolv_count = 0;
        std::cin >> character;
        std::cin >> inc_charcter;

        int num[character];

        for (int j = 0; j < character; j++)
        {
            std::cin >> num[j];
            num[j] = num[j] + inc_charcter;

            if (num[j] % 7 == 0)
            {
                wolv_count++;
            }
        }

        wolverins[i] = wolv_count;
    }

    for (int i = 0; i < test_cases; i++)
    {
        std::cout << wolverins[i] << std::endl;
    }

    return (0);
}