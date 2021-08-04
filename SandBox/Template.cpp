/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With Gods' Grace, Let's begin today's journey!
 * UserID: TheDev05, Happy Coding >_<
*/

#include <bits/stdc++.h>
using namespace std;

#define imax INT_MAX
#define imin INT_MIN
#define f first
#define s second
#define ll long long
#define loop(x, n) for (ll i = x; i < n; ++i)
#define look(x) cout << #x << "-> " << x << endl

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    std::cin >> t;

    while (t--)
    {
        solve();
    }
}

/* ------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n, k;
    std::cin >> n >> k;

    int num1[n], num2[n];
    loop(0, n) std::cin >> num1[i];
    loop(0, n) std::cin >> num2[i];

    sort(num1, num1 + n);
    sort(num2, num2 + n, greater<int>());

    loop(0, k)
    {
        if (num2[i] > num1[i])
        {
            num1[i] = num2[i];
        }
    }

    int sum = 0;
    loop(0, n) sum += num1[i];
    std::cout << sum << '\n';
}