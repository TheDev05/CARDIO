//** DMA: NEW & DELETE KEYWORD**

// #include <iostream>

// int main()
// {
//     int a, b;
//     std::cin >> a >> b;

//     int *p = new int;
//     *p = a + b;

//     std::cout << *p;

//     delete p;

//     return (0);
// }

#include <iostream>

class data
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }

    void show()
    {
        std::cout << a;
    }
};

int main()
{

    data *p = new data[6];
    (p + 0)->set(2);
    (p + 0)->show();

    delete[] p;

    return (0);
}