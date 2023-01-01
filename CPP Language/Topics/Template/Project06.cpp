/* C++ Program to Swap data using function template */

#include <iostream>

template <class type>
class swap
{
    type x, y;

public:
    swap(type a, type b) : x(a), y(b) { swap_them(&x, &y); }

    void swap_them(type *, type *);

    void show_data()
    {
        std::cout << "x: " << x << " "
                  << "y: " << y;
    }
};

template <class type>
void swap<type>::swap_them(type *a, type *b)
{
    type temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    swap<int> obj(2, 3);
    swap<float> obj1(2.2, 3.3);

    obj.show_data();
    obj1.show_data();

    return (0);
}