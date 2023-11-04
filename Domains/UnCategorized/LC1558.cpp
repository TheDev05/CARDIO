#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    sort(begin(num), end(num));

    int min = num[0];
    int sum = (min / 2) + 1;

    int index = 0;
    if (min & 1)
    {
        sum++, index++;

        if (min > 1)
            min--;
    }

    for (int i = index; i < num.size(); i++)
    {
        if (num[i] != min)
            sum += abs(num[i] - min);
    }

    if (min & 1 && min + 1 > 1)
        sum--;

    std::cout << sum - 1;

    /*
    1 5

    1 1
    1 2
    1 3
    1 4
    1 5

    4 2 5

    1 1 1 : 3
    2 2 2 : 4
    3 2 2
    4 2 2
    4 2 3
    4 2 4
    4 2 5

    Input: nums = [4,2,5]
    Output: 6   
    Explanation: (initial)[0,0,0] -> [1,0,0] -> [1,0,1] -> [2,0,2] -> [2,1,2] -> [4,2,4] -> [4,2,5](nums).

    */
}