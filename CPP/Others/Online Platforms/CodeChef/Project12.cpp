/* Chef wants to host some Division-3 contests. Chef has N setters who are busy creating new problems for him. The ith setter has made Ai problems where 1≤i≤N.
A Division-3 contest should have exactly K problems. Chef wants to plan for the next D days using the problems that they have currently. But Chef cannot host more than one Division-3 contest in a day.

LINK: https://www.codechef.com/problems/DIVTHREE 
*/

#include <iostream>
int main()
{
    int count;
    std::cin >> count;
    int data[count];

    for (int i = 0; i < count; i++)
    {
        int n;
        long long que_needed, sum = 0, days;

        std::cin >> n >> que_needed >> days;
        long long num[n];

        for (int j = 0; j < n; j++)
        {
            std::cin >> num[j];
            sum += num[j];
        }

        long long total_que = sum;
        int day_count = 0;

        if (total_que < que_needed || days == 0)
        {
            data[i] = 0;
            continue;
        }
    
        //********************************TLE negleted***************
        long long temp = (total_que / que_needed);

        if (days < temp)
        {
            data[i] = days;
        }
        else if (days >= temp)
        {
            data[i] = temp;
        }

        // while (1)//gives u TLE
        // {
        //     total_que = total_que - que_needed;

        //     if (days == 0 || total_que < 0)
        //     {
        //         break;
        //     }

        //     days--;
        //     day_count++;
        // }

        // data[i] = day_count;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << data[i] << std::endl;
    }

    return (0);
}
