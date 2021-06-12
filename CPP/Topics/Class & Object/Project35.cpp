//*Function overloading*

int area(int length, int breadth)
{
    return (length * breadth);
}

float area(float radius)
{
    return (3.14 * (radius * radius));
}

#include <iostream>
int main()
{
    float radius;
    int length, breadth;

    std::cout << "ENTER YOUR RADIUS: " << std::endl;
    std::cin >> radius;

    std::cout << "ENTER LENGTH AND BREADTH: " << std::endl;
    std::cin >> length >> breadth;

    float area_circle = area(radius);
    int area_rectangle = area(length, breadth);

    std::cout << "AREA OF CIRCLE: " << area_circle << std::endl;
    std::cout << "AREA OF RECTANGLE: " << area_rectangle << std::endl;

    return (0);
}