//* Back in 2015, Usain Bolt announced that he'll be retiring after the 2017 World Championship. Though his final season did not end gloriously, we all know that he is a true legend and we witnessed his peak during 2008 - 2013.

// * https://www.codechef.com/problems/USANBOLT

#include <iostream>
#include <cmath>

int main()
{
    int count;
    std::cin >> count;

    int num[count][4];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> num[i][j];
        }
    }

    for (int i = 0; i < count; i++)
    {
        int finish = num[i][0];
        int distance2bolt = num[i][1];
        int tiger_acc = num[i][2];
        int bolt_speed = num[i][3];

        int tiger_totaldist = num[i][0] + num[i][1];

        // std::cout << "DISTANCE 2 BOLT: " << distance2bolt << std::endl;
        // std::cout << "BOLT_SPEED: " << bolt_speed << std::endl;

        float time_bolt = ((float)finish / bolt_speed);
        float twice_value = 2 * (float)tiger_totaldist;
        float time_tiger = sqrt(twice_value / tiger_acc);

        // std::cout << "TWICE_VAL: " << twice_value << std::endl;
        // std::cout << "TIME_BOLT: " << time_bolt << std::endl;
        // std::cout << "TIME_TIGER: " << time_tiger << std::endl;

        if (time_tiger <= time_bolt)
        {
            std::cout << "Tiger" << std::endl;
        }
        else if (time_tiger > time_bolt)
        {
            std::cout << "Bolt" << std::endl;
        }
    }

    return (0);
}