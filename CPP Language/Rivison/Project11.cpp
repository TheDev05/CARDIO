// Operator overloading: uniary

#include <iostream>

class data
{
    int val;

public:
    void set_data()
    {
        std::cout << "Enter your value: \n";
        std::cin >> val;
    }

    data operator++()
    {
        data point;

        point.val = val++;
        return (point);
    }

    data operator++(int)
    {
        data point;

        point.val = ++val;
        return (point);
    }

    void show_val()
    {
        std::cout << "Value is: " << val << '\n';
    }
};

int main()
{
    data obj1, obj2;

    obj1.set_data();

    obj2 = ++obj1;
    obj2.show_val();

    obj2 = obj1++;
    obj2.show_val();

    return (0);
}