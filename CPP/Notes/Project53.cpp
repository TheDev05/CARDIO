/* TEMPLATE PRACTICE */

#include <iostream>

template <class P, class Q>
class data
{
    P num1;
    Q num2;

public:
    data(P x, Q y) : num1(x), num2(y) {}

    void show_data()
    {
        std::cout << "SUM: " << num1 + num2 << '\n';
    }
};

int main()
{
    data<int, float> obj1(2, 1.2);
    data<float, float> obj2(1.2, 1.3);

    obj1.show_data();
    obj2.show_data();

    return (0);
}