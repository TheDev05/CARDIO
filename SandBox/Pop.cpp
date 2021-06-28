/* SMALLEST BINARY OF CONSECUTIVE 1s AT FIRST
LINK: https://www.codechef.com/problems/UNONE */

#include <iostream>
#include <string>
#include <cmath>

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubble_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = 0;
        for (int j = 0; j < count - 1 - i; j++)
        {

            if (*(p + j) > *(p + j + 1))
            {
                temp = 1;
                swap((p + j), (p + j + 1));
            }
        }
        if (temp == 0)
        {
            break;
        }
    }
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
        }

        bubble_sort(num, n);

        std::string store;
        int index = 0;

        for (int j = 0; j < n; j++)
        {
            int temp = num[j];
            int sum = 0;
            std::string s, rev;

            for (int k = 0; temp != 0; k++)
            {
                int rem = temp % 2;
                sum += rem;

                s += std::to_string(rem);
                temp = temp / 2;
            }

            int count = s.length();

            for (int p = 0; p < count; p++)
            {
                rev += s[count - 1 - p];
            }

            if (count * 1 == sum)
            {
                store += rev;
            }
            else
            {
                store.insert(index, rev);
                index = (rev.length());
            }
        }
        std::cout << store << "\n";
    }
}