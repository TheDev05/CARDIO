/*** Hello Stalker!,
  * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
  * With Gods' Grace, Let's begin today's journey!
  * Handle: at all platform: TheDev05, except CodeChef: WhoCares05; Happy Coding >_<
 ***/

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

/* Vectors */
#define vi vector<int>
#define vs vector<string>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define pb push_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define loop(x, n) for (ll i = x; i < n; ++i)  // Loop
#define db(x) cout << #x << "-> " << x << endl // Debug
#define xx cout << "Executed Succesfully" << '\n'

clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve();

int main()
{
    startTime = clock();

    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));

    int test = 1;
    // std::cin >> test;

    while (test--)
    {
        solve();
    }

    double sec = getCurrentTime();
    // cout << sec << "\n";
}

int atom = 0, node = 0, port = 0;

/* -- -- Here We Go -- -- */

void solve()
{
    int k, n;
    std::cin >> k >> n;

    int store = k;

    multiset<int> num;
    multiset<int, greater<int>> res;

    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        num.insert(val);
        res.insert(val);
    }

    int min = 0;

    while (k)
    {
        auto it = num.begin();

        if (*it == 0)
        {
            num.erase(it);
        }
        else
        {
            int temp = *it;
            min += temp;

            num.erase(it);
            num.insert(temp - 1);

            k--;
        }
    }

    int max = 0;
    k = store;

    while (k)
    {
        auto it = res.begin();

        int temp = *it;
        max += temp;

        res.erase(it);
        res.insert(temp - 1);

        k--;
    }

    std::cout << max << " " << min << '\n';
}