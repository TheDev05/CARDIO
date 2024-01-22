#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> first(m), second(m, 0);
    second[m - 1] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int sum = second[j];
            if (j + 1 < m)
                sum += first[j + 1];

            first[j] = sum;
        }
        
        second = first;
    }

    std::cout << first[0];
}