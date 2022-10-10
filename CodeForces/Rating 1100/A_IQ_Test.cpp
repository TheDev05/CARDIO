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
    // std::cin >> testCase;

    while (testCase--)
    {
        solve();
    }
}

/* Check: Single testCase or muntiple */

int check(vector<string> text)
{
    bool ok = false;
    for (int i = 1; i < text.size() - 1; i++)
    {
        for (int j = 1; j < text[i].size() - 1; j++)
        {
            if (text[i][j] == text[i][j + 1])
            {
                if (text[i][j] == text[i + 1][j] && text[i + 1][j] == text[i + 1][j + 1] || text[i][j] == text[i - 1][j] && text[i - 1][j] == text[i - 1][j + 1])
                {
                    ok = true;
                }
                else if (text[i + 1][j] != text[i][j] && text[i + 1][j + 1] == text[i][j])
                {
                    ok = true;
                }
                else if (text[i + 1][j] == text[i][j] && text[i + 1][j + 1] != text[i][j])
                {
                    ok = true;
                }
                else if (text[i - 1][j] != text[i][j] && text[i - 1][j + 1] == text[i][j])
                {
                    ok = true;
                }
                else if (text[i - 1][j] == text[i][j] && text[i - 1][j + 1] != text[i][j])
                {
                    ok = true;
                }
            }
        }

        if (ok)
        {
            return (1);
        }
    }

    return (0);
}

void solve()
{
    vector<string> text;
    text.pb("000000");

    for (int i = 0; i < 4; i++)
    {
        string temp, dope = "0";
        std::cin >> temp;

        temp += "0";
        dope += temp;

        text.pb(dope);
    }

    text.pb("000000");
    bool ok = false;

    // for (auto i : text)
    //     std::cout << i << " " << '\n';
    // en;

    if (check(text))
    {
        std::cout << "YES\n";
        rn;
    }

    vector<string> data;
    for (int i = 0; i < 6; i++)
    {
        string temp;
        for (int j = 0; j < 6; j++)
        {
            temp += text[j][i];
        }

        data.pb(temp);
    }

    if (check(data))
    {
        std::cout << "YES\n";
        rn;
    }

    // for (auto i : data)
    //     std::cout << i << " " << '\n';

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