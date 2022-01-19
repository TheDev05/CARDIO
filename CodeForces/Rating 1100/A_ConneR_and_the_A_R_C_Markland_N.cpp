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

/* Check Single testCase or muntiple & 👌Never Give Up👌, Keep Hustling! */

void solve()
{
    int n, k, d;
    std::cin >> n >> k >> d;

    map<int, int> num;
    for (int i = 0; i < d; i++)
    {
        int val;
        std::cin >> val;

        num[val] = 1;
    }

    if (num[k] != 1)
    {
        std::cout << "0\n";
        rn;
    }

    auto start = num.begin();
    auto end = num.end();
    end--;

    int left = start->first, right = end->first;

    // db(left);
    // db(right);

    int dist1 = imax, dist2 = imax, dist3 = imax, dist4 = imax;
    if (left != 1)
    {
        dist1 = k - (left - 1);
    }

    if (right != n)
    {
        dist2 = (right + 1) - k;
    }

    int dot = left;
    for (auto i = num.begin(); i != num.end(); i++)
    {
        if (i->first != dot)
        {
            int temp = abs((i->first - 1) - k);
            dist3 = std::min(dist3, temp);
        }

        dot = i->first;
        dot++;
    }

    dot = right;
    for (auto i = num.rbegin(); i != num.rend(); i++)
    {
        if (i->first != dot)
        {
            int temp = abs((i->first + 1) - k);
            dist4 = std::min(dist4, temp);
        }

        dot = i->first;
        dot--;
    }

    // db(dist1);
    // db(dist2);
    // db(dist3);
    // db(dist4);

    std::cout << std::min({dist1, dist2, dist3, dist4}) << '\n';
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/