//* PRINTING BINARY TO DECIMAL AND DECIMAL TO BINARY
//* STRORING REVERES OF A NUMBER AS A NUMBER

// #include <iostream>
// #include <cmath>

// int power(int num)
// {
//     int prod = 1;
//     for (int i = 0; i < num; i++)
//     {
//         prod *= 2;
//     }
//     return (prod);
// }

// int main()
// {
//     int binary;

//     std::cout << "ENTER YOUR BINARY NUMBERS: " << std::endl;
//     std::cin >> binary;

//     int count = floor(log10(binary) + 1);

//     int sum = 0;
//     for (int i = 0; i < count; i++)
//     {
//         int rem = binary % 10;
//         sum += rem * power(i);
//         binary = binary / 10;
//     }

//     std::cout << sum;
//     return (0);
// }

//? **DECIMAL TO BINARY.. AND ALSO STORING IT AS ARRAY

#include <iostream>
int main()
{
    int num;
    std::cout << "ENTER DECIMAL NUMBERS: " << std::endl;
    std::cin >> num;

    int res[64];
    int count;

    for (int i = 0; num != 0; i++)
    {
        int rem = num % 2;

        res[i] = rem; //storing in array
        count = i + 1;

        num = num / 2;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        std::cout << res[i];
    }

    return (0);
}

//? **without array...store as a number

#include <iostream>
int main()
{
    int num;
    std::cout << "ENTER DECIMAL NUMBERS: " << std::endl;
    std::cin >> num;

    int sum = 0;
    int p = 1;

    for (int i = 0; num != 0; i++)
    {
        int rem = num % 2;
        // sum+=sum*10+rem*i  // *storing in forward diretion as getting yeild...123=321 (bcuz we are storing just splitting and reverse)

        sum = sum * 1 + rem * p; //*storing in reverse of yeild as...10=1010 (becuz we are stroing rem of 2)
        p = p * 10;
        num = num / 2;
    }

    std::cout << sum;
    return (0);
}