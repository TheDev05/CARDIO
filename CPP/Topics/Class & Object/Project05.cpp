///** C++ program to find square of float and integer using inline function

// #include <iostream>
// using namespace std;
// int sq1(int);
// float sq2(float);

// int main()
// {
//     int a, sq_a;
//     float b, sq_b;

//     cout << "ENTER YOUR INTEGER NUMBER: " << endl;
//     cin >> a;

//     cout << "ENTER YOUR FLOAT TYPE NUMBER: " << endl;
//     cin >> b;

//     sq_a = sq1(a);
//     sq_b = sq2(b);

//     cout << "SQUARE OF" << a << " IS: " << sq_a << endl;
//     cout << "SQUARE OF" << b << " IS: " << sq_b << endl;

//     return (0);
// }

// int sq1(int a)
// {
//     return (a * a);
// }

// float sq2(float b)
// {
//     return (b * b);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>
inline int find_cub(int);
inline find_sqr(int);

int main()
{
    int num;
    std::cout << "ENTER A NUMBER: " << std::endl;
    std::cin >> num;

    int sqr = find_sqr(num);
    int cub = find_cub(num);

    std::cout << "SQUARE: " << sqr << std::endl;
    std::cout << "CUBE: " << cub << std::endl;

    return (0);
}

int find_sqr(int num)
{
    return (num * num);
}

int find_cub(int num)
{
    return (num * num * num);
}