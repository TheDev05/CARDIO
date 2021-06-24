//** FILEHANDLING OPENING MODES **

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout;
    fout.open("abc.txt", std::ios::out);
    // fout.open("abc.txt", std::ios::app);
    
    fout << "I AM DEV";

    fout.close();

    std::ifstream fin;
    fin.open("abc.txt");

    char ch;
    while (!fin.eof())
    {
        ch = fin.get();
        std::cout << ch;
    }

    return (0);
}