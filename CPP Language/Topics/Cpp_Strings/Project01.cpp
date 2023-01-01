//* STRINGS PRACTICE

#include <iostream>
#include <string>
// #include <cstring>

int main()
{
    std::string text;
    // std::cout << "ENTER YOUR STRING: " << std::endl;

    // text = "ankit raj";

    // text.push_back('c');
    // text.pop_back();
    // text.erase(2, 1);
    // text.clear();
    // text = text.substr(1, 3);
    // text.append("123");

    // int val = text.compare("amkit");
    // std::cout << "VAL: " << val << std::endl;

    // int index = text.find("raj");
    // std::cout << "INDEX: " << index << std::endl;

    // text.insert(2, "123");
    // text.replace(2, 3, "123");

    // char name[20];
    // strcpy(name, text.c_str());
    // std::cout << "NAME: " << name << std::endl;

    // std::cout << text[2] << std::endl;

    // std::string str2 = "3.14159";
    std::string str3 = "31337 geek 000"; //*why not 000 or when "geek 000" putted error encountered
    int myint3 = stoi(str3);
    std::cout << "stoi(\"" << str3 << "\") is "
              << myint3 << '\n';

    return (0);
}