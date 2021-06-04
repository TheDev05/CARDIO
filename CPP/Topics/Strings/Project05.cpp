//**C++ Program To Find The Length Of Any String

#include <iostream>
#include <cstring>

int main()
{
    char name[10]="ANKIT";
    // char name[] = {'a', 'n', 'k', 'i', 't', '\0'};

    int count = strlen(name);

    std::cout << "LENGTH: " << count;
    return (0);
}