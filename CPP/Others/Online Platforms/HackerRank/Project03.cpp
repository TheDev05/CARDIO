/* Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.
Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.

Check some examples at:
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER NUMBER OF GAMES PALYED: " << std::endl;
    std::cin >> count;

    int num[count + 1];

    std::cout << "ENTER SCORES: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int max = num[0];
    int min = num[0];
    int max_breaked_count = 0, min_breaked_count = 0;

    for (int i = 0; i < count; i++)
    {

        if (max < num[i])
        {
            max_breaked_count++;
            max = num[i];
        }

        if (min > num[i])
        {
            min = num[i];
            min_breaked_count++;
        }
    }

    std::cout << "MAXIMUM SCORE BREKED: " << max_breaked_count << std::endl;
    std::cout << "MINIMUM SCAORED BREAKED: " << min_breaked_count << std::endl;

    return (0);
}