/* The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner. 

LINK: https://www.codechef.com/problems/TLG
TODO: IMPORTANT: THE ALGORITHM/ PROCES IS EXCELLENT
*/
#include <iostream>
#include <cmath>

int main()
{
    int count;
    std::cin >> count;
    count = count * 2;

    int num[count];
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];

        if (i % 2 == 0)
        {
            sum_even += num[i];
            num[i] = sum_even;
        }

        else if (i % 2 != 0)
        {
            sum_odd += num[i];
            num[i] = sum_odd;
        }
    }

    for (int i = 0; i < count ; i++)
    {
        if (i % 2 == 0)
        {
            num[i] = num[i] - num[i + 1];
            // num[i] = (num[i] < 0) ? (-num[i]) : (num[i]);

            i++;
        }
    }

    int temp = abs(num[0]);
    int max = num[0];

    for (int i = 0; i < count; i++)
    {

        if (temp < abs(num[i]) && i % 2 == 0)
        {
            temp = abs(num[i]);
            max = num[i];
        }
    }

    if (max < 0)
    {
        std::cout << "2"
                  << " " << temp << std::endl;
    }

    if (max > 0)
    {
        std::cout << "1"
                  << " " << temp << std::endl;
    }

    return (0);
}
