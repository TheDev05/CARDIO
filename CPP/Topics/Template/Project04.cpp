/* Vector Class Template */

#include <iostream>

template <class type>
class vector
{
public:
    type x;

    vector(type accept) : x(accept) {}
    void show_vec()
    {
        std::cout << x << '\n';
    }
};

int main()
{

    vector<std::string> obj1("WhoIsDev");
    vector<int> obj2(5);
    vector<float> obj3(5.5);
    vector<char> obj4('c');

    obj1.show_vec();
    obj2.show_vec();
    obj3.show_vec();
    obj4.show_vec();

    return (0);
}
