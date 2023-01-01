//**C program to find Total Amount of purchased Items by Passing Structure as an Argument using User Define Functions.

#include <iostream>

typedef struct item
{
    char item_name[10];
    float item_price;
    int item_quantity;
};

float find_amount(struct item temp)
{
    return (temp.item_price * temp.item_quantity);
}

int main()
{
    struct item type1;

    std::cout << "ENTER ITEM NAME: " << std::endl;
    std::cin.getline(type1.item_name, 10);

    std::cout << "ENTER ITEM PRICE: " << std::endl;
    std::cin >> type1.item_price;

    std::cout << "ENTER ITEM QUANTITY: " << std::endl;
    std::cin >> type1.item_quantity;

    float amount = find_amount(type1);

    std::cout << "ITEM NAME: " << type1.item_name << std::endl;
    std::cout << "TOTAL PRICE:" << amount;

    return (0);
}
