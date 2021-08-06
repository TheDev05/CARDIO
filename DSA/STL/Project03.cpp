/* STL: Pair */

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> pp;
    pp = make_pair(2, 3);
    cout << pp.first << " " << pp.second;

    std::cout << '\n';

    pair<string, int> pp1;
    pp1 = make_pair("ANKIT", 20);
    std::cout << pp1.first << " " << pp.second;

    std::cout << '\n';

    pair<string, pair<int, int>> pp2;
    pp2 = make_pair("AKSNSHA", make_pair(19, 10));
    std::cout << pp2.first << " " << pp2.second.first << " " << pp2.second.second;

    std::cout << '\n';
    
    pair<pair<string, float>, pair<string, float>> pp3;
    pp3 = make_pair(make_pair("Ankit", 90.99), make_pair("Akansha", 88.80));
    std::cout << pp3.first.first << " " << pp3.first.second << " " << pp3.second.first << " " << pp3.second.second;
}