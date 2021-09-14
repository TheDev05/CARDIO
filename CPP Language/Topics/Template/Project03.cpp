/* Class Template */

#include <iostream>

template <class type1, class type2>
class data
{
private:
    type1 a;
    type2 b;

public:
    data(type1 x, type2 y) : a(x), b(y) {}

    void show_data()
    {
        std::cout << a + b << '\n';
    }
};

int main()
{
    data<int, int> obj1(2, 3);
    data<float, float> obj2(1.1, 2.2);
    data<int, float> obj3(2, 2.2);

    obj1.show_data();
    obj2.show_data();
    obj3.show_data();

    return (0);
}