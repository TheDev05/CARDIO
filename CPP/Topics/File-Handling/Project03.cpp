/*  Read numbers from a file and write even, odd and prime numbers to
separate file. */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin;
    std::ofstream fin_even, fin_odd, fin_prime;

    fin_even.open("even.txt", std::ios::app);
    fin_odd.open("odd.txt", std::ios::app);
    fin_prime.open("prime.txt", std::ios::app);

    fin.open("data.txt");
    int n;

    while (!fin.eof())
    {
        fin >> n;

        if (n % 2 == 0)
        {
            fin_even << n << " ";
        }

        if (n % 2 != 0)
        {
            fin_odd << n << " ";
        }

        for (int i = 2; i <= 9; i++)
        {
            if (n % i == 0 && n != i)
            {
                fin_prime << n << " ";
            }
        }
    }

    return (0);
}