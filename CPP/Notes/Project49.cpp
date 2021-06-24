//** FILE-HANDLING:IFSTREAM**
#include <iostream>
#include <fstream>

int main()
{

    // std::ofstream fout;
    // fout.open("time.pdf");
    // fout << "hello";
    // fout.close();

    std::ifstream fin;
    fin.open("time.pdf", std::ios::binary);

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