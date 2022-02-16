/*
 Believe-in-your-Karma & Keep chanting,

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
#define xx cout << "Good 😊" << '\n';

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

/* Recall Rule'5: Never Give Up & Keep Hustling! */

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int n;
    std::cin >> n;

    std::string text1, text2;
    std::cin >> text1 >> text2;

    srt(text1);
    srt(text2);

    int max = text1[n - 1];
    int min = text2[0];

    string use1, deny1, use2, deny2;
    for (int i = 0; i < text1.size(); i++)
    {
        if (text1[i] >= min)
        {
            deny1 += text1[i];
        }
        else
            use1 += text1[i];

        if (text2[i] <= max)
        {
            deny2 += text2[i];
        }
        else
            use2 += text2[i];
    }

    srt(use1);
    srt(deny1);

    rsrt(use2);
    rsrt(deny2);

    string result1, result2;
    int index1 = 0, index2 = 0;

    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < (2 * text1.size()); i++)
    {
        if (i & 1)
        {
            if (pos1 >= use2.size())
            {
                result2 += deny2[index2];
                index2++;
            }
            else
            {
                result1 += use2[pos1];
                pos1++;
            }
        }
        else
        {
            if (pos2 >= use1.size())
            {
                result2 += deny1[index1];
                index1++;
            }
            else
            {
                result1 += use1[pos2];
                pos2++;
            }
        }
    }

    //  TESTCASE:
    //  1
    //  14
    //  abqqqqqqqqqqqq
    //  bauuuuuuuuuuuu

    std::cout << result1;
    std::cout << result2 << '\n';
}

/*
1. Check for Neg Input, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All Input equal, Input Repeated, Negative.
5. Float-Double Precisions, Check float errors!?
*/