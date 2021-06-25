/* LOGIN MANAGEMENT SYSTEM */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
    /** CREATED ACCOUNT VIA OTP VERIFICATION **/
    /* PASSWORD GENERATED */

    std::string user_name, pwd;

    std::cout << "ENTER YOUR USER_NAME: " << std::endl;
    std::cin >> user_name;

    std::cout << "ENTER YOUR PASSWORD: " << std::endl;
    std::cin >> pwd;

    std::ofstream set_user_name;
    set_user_name.open("id.txt");
    set_user_name << user_name;
    set_user_name.close();

    std::cin.ignore();

    std::ofstream set_pwd;
    set_pwd.open("pwd.txt");
    set_pwd << pwd;
    set_pwd.close();

    std::cout << "********CONGO!, YOUR ACCOUNT IS CREATED********" << std::endl;

    /*LOGIN*/
    std::string user_username, user_pwd;

    std::cout << "ENTER YOUR USER_NAME: " << std::endl;
    std::cin >> user_username;

    std::cout << "ENTER YOUR PASSWORD: " << std::endl;
    std::cin >> user_pwd;

    std::string verify_id, verify_pwd;

    std::ifstream fin;
    fin.open("id.txt");

    char ch;
    while (!fin.eof())
    {
        ch = fin.get();
        verify_id += ch;
    }

    // verify_id.push_back('\0');

    std::ifstream fin1;
    fin1.open("pwd.txt");
    while (!fin1.eof())
    {
        ch = fin1.get();
        verify_pwd += ch;
    }

    verify_id += 's';
    std::cout << "verify_id: " << verify_id;

    // std::cout << verify_id[3];

    if (verify_id == user_username && verify_pwd == user_pwd)
    {
        std::cout << "LOGIN SUCCESFUL" << std::endl;
    }

    if (verify_pwd == user_pwd)
    {
        std::cout << "Errr! USERNAME OR PASSWORD IS INCORRECT" << std::endl;
    }

    return (0);
}