/* In the 2-D world of Flatland, the Circles were having their sports day and wanted to end it with a nice formation. So, they called upon Mr. Sphere from Spaceland for help. Mr Sphere decides to arrange the Circles in square formations. He starts with N Circles and forms the largest possible square using these Circles. He then takes the remaining Circles and repeats the procedure. A square of side S requires S2 Circles to create.

LINK: https://www.codechef.com/problems/ICL1902
*/

#include <iostream>
int main()
{
    int count;
    std::cin >> count;

    int num[count];
    int data[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        int val, key = 0;

        int temp = num[i];
      

        while (1)
        {

            for (int j = 1; (j * j) <= temp; j++)
            {
                val = j;
            }

            // std::cout << val << std::endl;

            if ((val * val) == temp)
            {
                key++;
                break;
            }
            else if (temp > (val * val))
            {
                temp = temp - (val * val);
                key++;
            }
        }

        data[i] = key;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << data[i] << std::endl;
    }

    return (0);
}