#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    transform(num.begin(), num.end(), num.begin(), [](int x)
              { return (x > 2) ? x : -1; });

    for (int i = 0; i < num.size(); i++)
    {
        std::cout << num[i] << " ";
    }
}