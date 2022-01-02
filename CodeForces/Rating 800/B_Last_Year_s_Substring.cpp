/*
 StayWithKarma & chant with me,

    "Hare Krishna Hare Krishna, Krishna Krishna Hare Hare,
     Hare Rama Hare Rama, Rama Rama Hare Hare !!"

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
#define sumof(v) accumulate(v.begin(), v.end(), 0);
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define rn return
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

/* Check: Single testCase or muntiple */

void solve()
{
    int n;
    std::cin >> n;

    std::string text;
    std::cin >> text;

    bool ok = false;

    if (n <= 4)
    {
        if (text == "2020")
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }

        rn;
    }

    if (text[0] == '2' && text[1] == '0' && text[n - 2] == '2' && text[n - 1] == '0')
    {
        ok = true;
    }

    if (text[0] == '2' && text[n - 3] == '0' && text[n - 2] == '2' && text[n - 1] == '0')
    {
        ok = true;
    }

    if (text[0] == '2' && text[1] == '0' && text[2] == '2' && text[n - 1] == '0')
    {
        ok = true;
    }

    if (text[0] == '2' && text[1] == '0' && text[2] == '2' && text[3] == '0')
    {
        ok = true;
    }

    if (text[n - 1] == '0' && text[n - 2] == '2' && text[n - 3] == '0' && text[n - 4] == '2')
    {
        ok = true;
    }

    if (ok)
    {
        std::cout << "YES\n";
    }
    else
        std::cout << "NO\n";
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/