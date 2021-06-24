//** FILE HANDLING: OFSTREAM**

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout;
    fout.open("abc.txt");

    fout << "ANKIT RAJ";
    fout.close();

    return (0);
}