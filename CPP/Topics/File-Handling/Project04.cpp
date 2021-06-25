/* Append content to a file. */

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout;
    fout.open("data.txt", std::ios::app);
    fout << "HELLO SIR!";
    fout.close();

    std::ifstream fin;
    fin.open("data.txt");
    std::string s;
    char ch;

    while (!fin.eof())
    {
        ch = fin.get();
        s += ch;
    }

    std::cout << s;

    return (0);
}