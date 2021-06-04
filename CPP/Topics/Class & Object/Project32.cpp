//**C++ program to find reverse of number by defining functions outside
// class

#include <iostream>

class data
{
private:
    int num[10], count;

public:
    void setdata()
    {
        std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
        std::cin >> count;
        std::cout << "ENTER NUMBER: " << std::endl;
        for (int i = 0; i < count; i++)
        {
            std::cin >> num[i];
        }
    }
    void reverse();
};

void data::reverse()
{
    for (int i = count - 1; i >= 0; i--)
    {
        std::cout << num[i] << " ";
    }
}

int main()
{
    data obj1;
    obj1.setdata();
    obj1.reverse();
    return (0);
}