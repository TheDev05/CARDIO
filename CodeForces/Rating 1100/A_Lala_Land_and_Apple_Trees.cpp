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
    // std::cin >> testCase;

    while (testCase--)
    {
        solve();
    }
}

/* Recall Rule'5: 👌Never Give Up👌 & Keep Hustling! */

void solve()
{
    // Reminder: TestCases are single/multiple?

    ll n, sum = 0;
    std::cin >> n;

    vpi neg, pos;
    ll sum_neg = 0, sum_pos = 0;

    for (ll i = 0; i < n; i++)
    {
        ll val1, val2;
        std::cin >> val1 >> val2;

        if (val1 < 0)
        {
            neg.pb(mp(val1, val2));
        }
        else
        {
            pos.pb(mp(val1, val2));
        }

        sum += val2;
    }

    sort(all(neg),greater<>());
    srt(pos);

    loop(0, neg.size()) sum_neg += neg[i].second;
    loop(0, pos.size()) sum_pos += pos[i].second;

    if (neg.size() == 0)
    {
        std::cout << pos[0].second << '\n';
        rn;
    }

    if (pos.size() == 0)
    {
        std::cout << neg[0].second << '\n';
        rn;
    }

    if (neg.size() == pos.size())
    {
        std::cout << sum << '\n';
        rn;
    }

    ll result = 0;
    if (neg.size() < pos.size())
    {
        result = sum_neg;
        loop(0, neg.size() + 1) result += pos[i].second;
    }

    if (pos.size() < neg.size())
    {
        result = sum_pos;
        loop(0, pos.size() + 1) result += neg[i].second;
    }

    std::cout << result << '\n';
}

/*
1. Check for Neg Input, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All Input equal, Input Repeated, Negative.
5. Float-Double Precisions, Check float errors!?
*/