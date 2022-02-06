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

    int n, m;
    std::cin >> n >> m;

    vector<string> text1(n);
    vector<string> text2(m);

    map<string, int> data;
    for (int i = 0; i < n; i++)
    {
        std::cin >> text1[i];
        data[text1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> text2[i];
        data[text2[i]]++;
    }

    set<pair<int, string>, greater<>> num1;
    set<pair<int, string>, greater<>> num2;

    for (int i = 0; i < text1.size(); i++)
    {
        if (data[text1[i]] == 1)
        {
            num1.insert(mp(0, text1[i]));
        }
        else
        {
            num1.insert(mp(1, text1[i]));
        }
    }

    for (int i = 0; i < text2.size(); i++)
    {
        if (data[text2[i]] == 1)
        {
            num2.insert(mp(0, text2[i]));
        }
        else
        {
            num2.insert(mp(1, text2[i]));
        }
    }

    for (int i = 0;; i++)
    {
        if (i & 1)
        {
            if (num2.size() == 0)
            {
                std::cout << "YES\n";
                rn;
            }

            auto it = num2.begin();
            if (num1.find((*it)) != num1.end())
            {
                num1.erase((*it));
            }
            num2.erase(it);
        }
        else
        {
            if (num1.size() == 0)
            {
                std::cout << "NO\n";
                rn;
            }

            auto it = num1.begin();
            if (num2.find((*it)) != num2.end())
            {
                num2.erase((*it));
            }
            num1.erase(it);
        }
    }
}

/*
1. Check for Neg Input, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All Input equal, Input Repeated, Negative.
5. Float-Double Precisions, Check float errors!?
*/