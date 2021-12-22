// Exmaple of class & objects

#include <iostream>

class data
{

    int point1, point2;

public:
    void fill_points()
    {
        std::cout << "Enter the values: point1 and point 2" << '\n';
        std::cin >> point1 >> point2;
    }

    void add_points()
    {
        std::cout << "Sum of points is: " << point1 + point2 << '\n';
    }
};

int main()
{
    data obj;
    obj.fill_points();
    obj.add_points();

    return (0);
}