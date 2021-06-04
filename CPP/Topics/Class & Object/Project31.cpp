//**C++ Program to display entered Date

#include <iostream>

class data
{
private:
    int day, month, year;

public:
    void setdate()
    {
        std::cout << "ENTER DAY: " << std::endl;
        std::cin >> day;
        std::cout << "ENTER MONTH: " << std::endl;
        std::cin >> month;
        std::cout << "ENTER YEAR: " << std::endl;
        std::cin >> year;
    }
    void showdate()
    {
        std::cout << "DAY/MONTH/YEAR: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{
    data today;
    today.setdate();
    today.showdate();
    return (0);
}