/** Vector: Erase function, Various Loop iterations */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num;
    int count;

    std::cout << "ENTER INPUT COUNT\n";
    std::cin >> count;

    std::cout << "ENTER YOUR INPUT:\n";
    for (int i = 0; i < count; i++)
    {
        int val;

        std::cin >> val;
        num.push_back(val);
    }

    for (auto i : num) /* For Each Loop */
    {
        std::cout << i << " ";
    }

    std::cout << '\n';

    for (auto i = num.begin(); i != num.end(); i++) /* Iterator declared Loop */
    {
        std::cout << *i << " ";
    }

    std::cout << '\n';

    for (auto i = num.end() - 1; i >= num.begin(); i--) /* Reverese */
    {
        std::cout << *i << " ";
    }

    std::cout << '\n';

    for (auto i = num.rbegin(); i != num.rend(); i++) /* Reverese */
    {
        std::cout << *i << " ";
    }

    std::cout << '\n';

    // Input -> 1,2,3,4,5,6

    // num.erase(num.begin() + 2); /* delete 3rd pos: 1,2,4,5,6 */
    // num.erase(num.end() - 4);

    // num.erase(num.begin() + 2, num.begin() + 5); /* Erase 3rd pos to 5th: 1,2,6 */

    // num.erase(4); /* Delete not positiion but element */

    for (auto i : num)
    {
        std::cout << i << " ";
    }

    std::cout << '\n';

    vector<int>::iterator it;
    it = find(num.begin(), num.end(), 4);
    if (it != num.end())
    {
        std::cout << "4 Found at " << *it << '\n';
    }

    it = find(num.begin(), num.end(), 9);
    if (it == num.end())
    {
        std::cout << "9 Not Found " << '\n';
    }
}
