/* Find third Maximum Number: Numbers can be repeated */

#include <bits/stdc++.h>
using namespace std;
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int main()
{
    startTime = clock();
    int n = 10000, m = 10000;
    while (n)
    {
        while (m)
        {
            std::cout << "hello\n";
            m--;
        }
        n--;
    }

    double sec = getCurrentTime();
    cout << sec << "\n";
}