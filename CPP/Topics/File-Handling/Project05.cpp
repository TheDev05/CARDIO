/* Compare two files. */

#include <iostream> // std::cin, std::cout
#include <fstream>  // std::ifstream

int main()
{

    std::string str;

    std::cout << "Enter the name of an existing text file: ";
    std::getline(std::cin, str);

    std::ifstream is(str); // open file

    char c;
    while (is.get(c)) // loop getting single characters
        std::cout << c;

    is.close(); // close file

    return 0;
}