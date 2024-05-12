#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int ans = 0;
    bool ok = true;

    for (int i = 0; i < req.size(); ++i)
    {
        if (ok)
        {
            ans += req[i];
        }

        ok = !ok;
    }

    return ans;

    return 0;
}
