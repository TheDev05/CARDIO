/*
 StayWithKarma & repeat with me, "Hare Krishna!"
 Username: TheDev05, Happy Coding <3
*/

#include <bits/stdc++.h>
using namespace std;

/* Limits */
#define imax INT_MAX
#define imin INT_MIN

/* Pairs */
#define pi pair<ll, ll>
#define ps pair<string, string>
#define pis pair<ll, string>
#define psi pair<string, ll>
#define mp make_pair
#define f first
#define s second

/* Maps */
#define mpi map<ll, ll>
#define mps map<string, string>
#define mpis map<ll, string>
#define mpsi map<string, ll>
#define mpic map<ll, char>
#define mpci map<char, ll>

/* Vectors */
#define vi vector<ll>
#define vs vector<string>
#define vpi vector<pair<ll, ll>>
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define db(x) cout << #x << "[" << x << "]" << '\n';
#define xx cout << "Executed Succesfully" << '\n'

void solve();

const ll maxlimit = 1e7 + 10;
vector<bool> isPrime(maxlimit, 1);

void fillPrimes()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i < maxlimit; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < maxlimit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    /* Input-Output data from text file */
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int test = 1;
    std::cin >> test;

    while (test--)
    {
        solve();
    }
}

/* Check: Single testCase or muntiple */

void solve()
{
    int n;
    std::cin >> n;

    vi num, dot1, dot2, result;
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        num.pb(val);

        if (i < n / 2)
        {
            dot1.pb(val);
        }
        else if (i > n / 2)
        {
            dot2.pb(val);
        }

        if (n % 2 == 0 && i == n / 2)
        {
            dot2.pb(val);
        }
    }

    reverse(dot1.begin(), dot1.end());

    if (n & 1)
    {
        result.pb(num[n / 2]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        result.pb(dot2[i]);
        result.pb(dot1[i]);
    }

    reverse(result.begin(), result.end());
    loop(0, n) std::cout << result[i] << " ";

    en;
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/