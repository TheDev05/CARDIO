/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With Gods' Grace, Let's begin today's journey!
 * UserID: TheDev05, Happy Coding >_<
*/

#include <bits/stdc++.h>
using namespace std;

/* Limits */
#define imax INT_MAX
#define imin INT_MIN

/* Pairs */
#define pi pair<int, int>
#define ps pair<string, string>
#define mp make_pair
#define f first
#define s second

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define loop(x, n) for (ll i = x; i < n; ++i)  // Loop
#define db(x) cout << #x << "-> " << x << endl // Debug

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // std::cin >> t;

    while (t--)
    {
        solve();
    }
}

/* -- -- Here We Go -- -- */

void solve()
{
    string s1 = "Ankit", s2 = "amkit";
    if (s1 > s2)
    {
        std::cout << "hello\n";
    }
    else
        std::cout << "lol\n";
}