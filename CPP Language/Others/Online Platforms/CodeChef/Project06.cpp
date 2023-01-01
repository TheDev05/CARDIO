/* Jem will not take a break until he finishes at least half of the remaining problems. Formally, if N is even then he will take he first break after finishing N / 2 problems. If N is odd then the break will be after he done (N + 1) / 2 problems. Each of his break will last for B minutes. Initially, he takes M minutes in solving a problem, after each break he will take twice more time in solving a problem, i.e. 2 * M minutes per problem after the first break.

LINK: https://www.codechef.com/problems/TALAZY
*/

#include <iostream>
int main()
{
    int count;
    std::cin >> count;

    int num[count][3];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> num[i][j];
        }
    }

    for (int i = 0; i < count; i++)
    {
        int total_task = num[i][0];
        int break_time = num[i][1];

        long long task_performingTime = num[i][2];
        long long total_time_taken = 0;

        for (int j = 0; total_task != 0; j++)
        {
            int half = (total_task % 2 == 0) ? (total_task / 2) : ((total_task + 1) / 2);

            total_time_taken += ((half * task_performingTime) + break_time);

            total_task = total_task - half;
            task_performingTime = task_performingTime * 2;
        }

        std::cout << (total_time_taken - break_time) << std::endl;
    }

    return (0);
}