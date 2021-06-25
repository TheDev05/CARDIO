/*  Read file contents and display on the console. */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ifstream fin;
    fin.open("data.txt");

    char ch;
    std::string s;

    while (!fin.eof())
    {
        ch = fin.get();
        s += ch;
    }

    std::cout << s;
    return (0);
}
