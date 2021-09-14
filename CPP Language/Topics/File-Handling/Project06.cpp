/* STORE BULK FORNATTED DATA IN FILE */

// #include <fstream>
// #include <iostream>

// int main()
// {
//     std::ofstream fout;

//     int num[20] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
//     // char num[20] = "this works fine";

//     int *p = num;

//     fout.open("popu.txt");
//     fout.write((char *)p, sizeof(num));

//     // fout << num[1]; //we can alos use this with a loop.

//     fout.close();

//     std::ifstream fin;
//     fin.open("popu.txt");

//     char ch;

//     while (fin.get(ch))
//     {

//         std::cout << ch;
//     }

//     return (0);
// }

/* NOW CREATE A CLASS AND STORE N PRINT ALL VALUES @MSirg.com */

#include <iostream>
#include <fstream>
#include <string>

class value
{

    int val;
    char text[20];

    // std::string text;
    /* getting wrong result after using std::string */

public:
    void read_Data()
    {
        std::cout << "ENTER TEXT and ANY INT VALUE: " << std::endl;
        std::cin >> text >> val;

        push_toFile();
    }

    void push_toFile()
    {
        std::ofstream fout;
        fout.open("val.txt", std::ios::app);
        fout.write((char *)this, sizeof(*this));

        fout.close();
    }

    void pull_fromFile()
    {
        std::ifstream fin;
        fin.open("val.txt", std::ios::app);
        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            show_Data();
            fin.read((char *)this, sizeof(*this));
        }
    }

    void show_Data()
    {
        std::cout << text << " " << val << '\n';
    }
};

int main()
{

    // value val1, val2;
    // val1.read_Data();
    // val2.read_Data();

    value show_allData;
    show_allData.pull_fromFile();

    return (0);
}