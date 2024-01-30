#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::stack<std::string> data;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == "+" || num[i] == "-" || num[i] == "*" || num[i] == "/")
        {
            int val1 = stoi(data.top());
            data.pop();
            int val2 = stoi(data.top());
            data.pop();

            if (num[i] == "+")
                data.push(to_string(val2 + val1));
            else if (num[i] == "-")
                data.push(to_string(val2 - val1));
            else if (num[i] == "*")
                data.push(to_string(val2 * val1));
            else
                data.push(to_string(val2 / val1));
        }
        else
            data.push(num[i]);
    }

    std::cout << stoi(data.top());
}