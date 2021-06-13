/* 

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

            total_time_taken += ((half * task_performingTime) + 1); //1 minute is for break.

            total_task = total_task - half;
            task_performingTime = task_performingTime * 2;//after per break taskperforming time get doubled
        }

        std::cout << (total_time_taken - 1) << std::endl;//Here '-1' is for: while comlpleting the very last task we added the break time, though kid dont take break...because the task is comleted.
    }

    return (0);
}