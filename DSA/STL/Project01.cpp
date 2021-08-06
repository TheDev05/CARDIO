/* STL-Array */

#include <iostream>
#include <array>
using namespace std;

void write(array<int, 5> &num)
{
    for (int i = 0; i < num.size(); i++)
    {
        num[i] = num[i] + 1;
    }
}

int main()
{

    array<int, 5> num = {1, 2, 3, 4, 5};

    write(num);

    num.fill(0);

    for (int i = 0; i < num.size(); i++)
    {
        std::cout << num[i] << " ";
    }

    std::cout << '\n';
    std::cout << num.front() << '\n';
    std::cout << num.back() << '\n';

    if (num.empty())
    {
        std::cout << "NO ARRAY ELENTS\n";
    }
    else
        std::cout << "ARRAY IS FILLED\n";

    return (0);
}