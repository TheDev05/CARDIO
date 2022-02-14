//**C++ Program For Book Details Using Structure

#include <iostream>

struct data
{
    char book_name[20];
    int isbn, year_publishing;
};

int main()
{
    data book;

    std::cout << "ENTER BOOK NAME: " << std::endl;
    std::cin.getline(book.book_name, 20);

    std::cout << "BOOK ISBN NUMBER: " << std::endl;
    std::cin >> book.isbn;

    std::cout << "BOOK PUBLISHING YEAR: " << std::endl;
    std::cin >> book.year_publishing;

    std::cout << "BOOK_NAME: " << book.book_name << std::endl
              << "BOOK ISBN NUMBER: " << book.isbn << std::endl
              << "BOOK PUBLISHING YAER: " << book.year_publishing << std::endl;

    return (0);
}