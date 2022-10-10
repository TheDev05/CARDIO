/* STL ARRAY */

#include <iostream>
#include <array>

using namespace std;

void change(std::array<int, 5> &p)
{
    for (int i = 0; i < p.size(); i++)
    {
        p[i] = p[i] + 1;
    }
}

int main()
{
    std::array<int, 5> num({1, 2, 3, 4, 5});
    // num = {1, 2, 3, 4, 5};

    std::cout << num.front() << " " << num.back() << '\n';

    change(num);

    for (int i = 0; i < 5; i++)
    {
        std::cout << num[i] << " ";
    }

   num.fill(0);

    for (int i = 0; i < num.size(); i++)
    {
        std::cout << num[i] << " ";
    }
}