/* An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking , so its leaderboard works like this:
The player with the highest score is ranked number 1 on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem */

#include <iostream>

int main()
{
    int count;
    std::cout << "ENTER RANKINGS COUNT: " << std::endl;
    std::cin >> count;

    int ranking[count];
    int key = 1;
    int res[count];
    int temp = -1;

    std::cout << "ENTER RANKING: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> ranking[i];

        if (temp == ranking[i])
        {
            res[i] = key - 1;
        }
        else
        {
            res[i] = key;
            key++;
        }
        temp = ranking[i];
    }

    int player;
    std::cout << "ENTER PLAYER SCORES: " << std::endl;
    std::cin >> player;

    int score[player];
    std::cout << "ENTER SCORES: " << std::endl;

    for (int i = 0; i < player; i++)
    {
        std::cin >> score[i];
    }

    for (int i = 0; i < player; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (score[i] >= ranking[j] && ranking[j] != -1)
            {
                if (score[i] == ranking[j])
                {
                    std::cout << res[j] << std::endl;
                    break;
                }
                else
                {

                    std::cout << res[j] << std::endl;
                    break;
                }
            }
            else if (j == count - 1)
            {
                std::cout << key << std::endl;
                break;
            }
        }
    }

    return (0);
}