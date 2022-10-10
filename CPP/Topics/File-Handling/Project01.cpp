/* Create a file and write contents, save and close the file. */

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout;
    fout.open("data.txt");
    fout << "THIS IS FILE-HANDLING CONCEPT";
    fout.close();

    return (0);
}