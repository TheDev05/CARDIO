//TODO: IMPORTANT : TAKES TOTAL 2 DAYS
/* You are given a sequence A1,A2,…,AN. Find the maximum value of the expression |Ax−Ay|+|Ay−Az|+|Az−Ax| over all triples of pairwise distinct valid indices (x,y,z).

LINK: https://www.codechef.com/problems/MAXFUN
*/

#include <iostream>

inline void positive(long long *p)
{
    if (*p < 0)
    {
        *p = -(*p);
    }
}

int findmin(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return (x);
    }
    else if (y < x && y < z)
    {
        return (y);
    }

    return (z);
}

int main()
{
    int count;
    std::cin >> count;
    int data[count];

    for (int i = 0; i < count; i++)
    {
        long long input;
        std::cin >> input;

        long long num[input];

        for (int j = 0; j < input; j++)
        {
            std::cin >> num[j];
        }

        int index1 = input - 3;
        int index2 = input - 2;
        int index3 = input - 1; //max

        long long res1 = num[input - 1];
        long long res2 = num[input - 2];
        long long res3 = num[input - 3];

        for (int k = 0; k < 3; k++)
        {
            int key = 0;
            int val = 0;

            for (int p = 0; p < input - 1 - k; p++)
            {

                if (num[p] > num[p + 1])
                {
                    long long temp = num[p];

                    num[p] = num[p + 1];
                    num[p + 1] = temp;

                    val = p;

                    key = 1;
                }
            }
            // if (key == 0)
            // {
            //     break;
            // }
            if (k == 0 && res1 != num[input - 1])
            {
                index3 = val;
                // std::cout << "val: " << val << std::endl;
            }
            if (k == 1 && res2 != num[input - 2])
            {
                index2 = val;
            }
            if (k == 2 && res3 != num[input - 3])
            {
                index1 = val;
            }
        }

        std::cout << index1 << " " << index2 << " " << index3;
        // for (int m = 0; m < input; m++)
        // {
        //     std::cout << num[m] << " ";
        // }

        index1 = findmin(index1, index2, index3);
        if (index2 < index3)
        {
            index2 = index2;
            index3 = index3;
        }
        else if (index3 < index2)
        {
            int dis = index2;
            index2 = index3;
            index3 = dis;
        }

        long long sum = 0;
        long long flag = 0;

        flag = index1 - index2;
        positive(&flag);
        sum += flag;

        flag = index2 - index3;
        positive(&flag);
        sum += flag;

        flag = index1 - index3;
        positive(&flag);
        sum += flag;

        data[i] = sum;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << data[i] << std::endl;
    }

    return (0);
}
