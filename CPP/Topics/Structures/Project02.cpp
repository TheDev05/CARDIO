//**C++ Program For Adding Two Distance Using Structure

#include <iostream>
#include <iomanip>

struct data
{
    float dist1, dist2;
};

int main()
{
    data value;

    std::cout << "ENTER 1ST DISTANCE IN METERS: " << std::endl;
    std::cin >> value.dist1;

    std::cout << "ENTER 2ND DISTANCE IN METERS: " << std::endl;
    std::cin >> value.dist2;

    value.dist1 = (value.dist1 / 12);
    value.dist2 = (value.dist2 / 12);

    float sum = value.dist1 + value.dist2;

    std::cout << "SUM OF TWO DISTANCES ARE: " << std::fixed << std::setprecision(2) << sum << std::endl;

    return (0);
}