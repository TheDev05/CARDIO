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
#define sumof(v) accumulate(v.begin(), v.end(), (ll)0);
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
#define xx cout << "🌻|Hare Krishna|🌻" << '\n';

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
    // db();

    int testCase = 1;
    std::cin >> testCase;

    while (testCase--)
    {
        solve();
    }
}

/* Recall Rule'5: Never Give Up & Keep Hustling! */

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int n;
    std::cin >> n;

    multiset<int, greater<>> even, odd;
    vi num(n);

    loop(0, n)
    {
        std::cin >> num[i];

        if (num[i] & 1)
        {
            odd.insert(num[i]);
        }
        else
            even.insert(num[i]);
    }

    int alice = 0, bob = 0;
    for (int i = 0; 1; i++)
    {
        if (std::max(even.size(), odd.size()) <= 0)
        {
            break;
        }

        if (i & 1)
        {
            auto it1 = odd.begin();
            auto it2 = even.begin();

            int val1, val2;
            if (odd.size() > 0)
            {
                val1 = (*(it1));
            }
            else
            {
                even.erase(it2);
                continue;
            }

            val2 = (*(it2));
            if (bob + val1 < alice + val2)
            {
                even.erase(it2);
            }
            else
            {
                bob += val1;
                odd.erase(it1);
            }
        }
        else
        {
            auto it1 = even.begin();
            auto it2 = odd.begin();

            int val1, val2;
            if (even.size() > 0)
            {
                val1 = (*(it1));
            }
            else
            {
                odd.erase(it2);
                continue;
            }

            val2 = (*(it2));
            if (alice + val1 < bob + val2)
            {
                odd.erase(it2);
            }
            else
            {
                alice += val1;
                even.erase(it1);
            }
        }
    }

    if (alice > bob)
    {
        std::cout << "Alice\n";
    }
    else if (bob > alice)
    {
        std::cout << "Bob\n";
    }
    else
        std::cout << "Tie\n";
}

/*
1. Check for Neg Input, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All Input equal, Input Repeated, Negative.
5. Float-Double Precisions, Check float errors!?
*/