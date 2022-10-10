/*
 Believe-In-your-Karma & chant with me,

    "Hare Rama Hare Rama, Rama Rama Hare Hare,
     Hare Krishna Hare Krishna, Krishna Krishna Hare Hare !!"

 Username: TheDev05, Happy Coding <3
*/

#include <bits/stdc++.h>
using namespace std;

#define imax INT_MAX
#define imin INT_MIN

#define pi pair<ll, ll>
#define ps pair<string, string>
#define pis pair<ll, string>
#define psi pair<string, ll>
#define mp make_pair
#define f first
#define s second

#define mpi map<ll, ll>
#define mps map<string, string>
#define mpis map<ll, string>
#define mpsi map<string, ll>
#define mpic map<ll, char>
#define mpci map<char, ll>

#define vi vector<ll>
#define vs vector<string>
#define vpi vector<pair<ll, ll>>
#define sumof(v) accumulate(v.begin(), v.end(), 0);
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

#define en cout << '\n'
#define ll long long
#define ull unsigned long long
#define ld long double
#define rn return
#define all(x) (x).begin(), (x).end()
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define rloop(x, n) for (ll i = x; i >= n; i--)
#define db(x) cout << #x << "[" << x << "]" << '\n';
#define xx cout << "I am good!" << '\n'

const ll maxlimit = 1e7 + 10;
vector<bool> isPrime(maxlimit, 1);

bool isPalin(std::string text)
{
    ll n = text.size();
    loop(0, n / 2) if (text[i] != text[n - 1 - i]) return false;
    return true;
}

void fillPrimes()
{
    isPrime[0] = isPrime[1] = false;
    loop(2, maxlimit)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < maxlimit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void solve();
int32_t main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int testCase = 1;
    std::cin >> testCase;

    while (testCase--)
    {
        solve();
    }
}

/* Recall Rule'5: 👌Never Give Up👌 & Keep Hustling! */

void solve()
{
    // Reminder: TestCases are single/multiple?

    ll n;
    std::cin >> n;

    vi pos, neg;
    bool ok = false;
    ll prod = 1;

    for (ll i = 0; i < n; i++)
    {
        ll val;
        std::cin >> val;

        if (val > 0)
        {
            pos.pb(val);
        }
        else if (val < 0)
        {
            neg.pb(val);
        }
        else
        {
            ok = true;
        }

        prod *= val;
    }

    if (neg.size() == 0 && pos.size() == 0)
    {
        std::cout << "0\n";
        rn;
    }

    rsrt(pos);
    rsrt(neg);

    if (n == 5)
    {
        std::cout << prod << '\n';
        rn;
    }

    ll prod1 = 0;
    if (pos.size() >= 5)
    {
        prod1 = pos[0] * pos[1] * pos[2] * pos[3] * pos[4];
    }

    if (neg.size() == 0)
    {
        std::cout << prod1 << '\n';
        rn;
    }
    else if (pos.size() == 0)
    {
        if (ok)
        {
            std::cout << "0\n";
        }
        else
        {
            std::cout << neg[0] * neg[1] * neg[2] * neg[3] * neg[4] << '\n';
            rn;
        }

        rn;
    }

    srt(neg);
    ll prod2 = 0, prod3 = 0;

    if (neg.size() >= 2)
    {
        prod2 = neg[0] * neg[1];
        if (pos.size() >= 3)
        {
            prod2 *= pos[0] * pos[1] * pos[2];
        }
        else
            prod2 = 0;
    }

    if (neg.size() >= 4)
    {
        prod3 = neg[0] * neg[1] * neg[2] * neg[3];
        if (pos.size() >= 1)
        {
            prod3 *= pos[0];
        }
        else
            prod3 = 0;
    }

    std::cout << std::max({prod1, prod2, prod3}) << '\n';
}

/*
1. Check for Neg Input, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All Input equal, Input Repeated, Negative.
5. Float-Double Precisions, Check float errors!?
*/