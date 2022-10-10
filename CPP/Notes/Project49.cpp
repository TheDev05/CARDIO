//** FILE-HANDLING:IFSTREAM**

#include <iostream>
#include <fstream>

int main()
{

    std::ofstream fout;
    fout.open("abc.txt");
    fout << "hello";
    fout.close();

    std::ifstream fin;
    fin.open("abc.txt");

    char ch;
    std::string s;

    while (!fin.eof())
    {
        ch = fin.get();
        // fin >> ch;
        s += ch;
    }

    std::cout << s;
    return (0);
}