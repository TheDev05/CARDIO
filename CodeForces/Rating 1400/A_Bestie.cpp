/*
     Jai Shree Krishna.

     Hare Krishna Hare Krishna, Krishna Krishna Hare Hare,
     Hare Rama Hare Rama, Rama Rama Hare Hare.

     Prayers. Practice. Patience.
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using namespace chrono;

#define int long long
#define imax (9) * (1e18)
#define imin (-9) * (1e18)

#define pi pair<int, int>
#define mp make_pair
#define ff first
#define ss second

#define vi vector<int>
#define vs vector<string>
#define vpi vector<pair<int, int>>
#define sumof(v) accumulate(v.begin(), v.end(), (int)0);
#define vvi vector<vector<int>>
#define pb emplace_back

#define en cout << '\n'
#define ull unsigned long long
#define double long double
#define rn return
#define all(x) (x).begin(), (x).end()
#define sorted(x) is_sorted(all(x))
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<int>())
#define loop(x, n) for (int i = x; i < n; ++i)
#define xx cout << "❁ जय श्री कृष्णा ❁" << '\n';

// This can be also used for multiset, however deletion is not allowed!
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int maxlimit = 1e5 + 10;
vector<bool> isPrime(maxlimit, 1);

bool isPalin(std::string text)
{
    int n = text.size();
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

#define db(x)          \
    cerr << #x << " "; \
    read(x);           \
    cerr << endl;

void read(int t)
{
    cerr << t;
}

void read(string t) { cerr << t; }
void read(char t) { cerr << t; }
void read(double t) { cerr << t; }
void read(bool t) { cerr << t; }

template <class T, class V>
void read(pair<T, V> p);

template <class T>
void read(vector<T> v);

template <class T>
void read(set<T> v);

template <class T, class V>
void read(map<T, V> v);

template <class T>
void read(multiset<T> v);

template <class T, class V>
void read(pair<T, V> p)
{
    cerr << " {";
    read(p.first);
    cerr << ",";
    read(p.second);
    cerr << "}";
}

template <class T>
void read(vector<T> v)
{
    cerr << ": ";
    for (T i : v)
    {
        read(i);
        cerr << " ";
    };
}

template <class T>
void read(set<T> v)
{
    cerr << ": ";
    for (T i : v)
    {
        read(i);
        cerr << " ";
    };
}

template <class T>
void read(multiset<T> v)
{
    cerr << ": ";
    for (T i : v)
    {
        read(i);
        cerr << " ";
    };
}

template <class T, class V>
void read(map<T, V> v)
{
    cerr << ": ";
    for (auto i : v)
    {
        read(i);
        cerr << " ";
    };
}

template <typename T1, typename T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve();
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    auto start1 = high_resolution_clock::now();
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fillPrimes();

    int testCases = 1, gcode = 1;
    std::cin >> testCases;

    while (testCases--)
    {
        // std::cout << "Case #" << gcode << ": ";
        // gcode++;

        solve();
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

    // cerr << "Time: " << duration.count() / 1000 << "ms" << endl;
}

void solve()
{
    // || Jai Shree Krishna ||
    int n;
    std::cin >> n;

    vi num(n), res;
    std::cin >> num;

    res = num;

    if (n == 1)
    {
        if (num[0] == 1)
        {
            std::cout << "0\n";
        }
        else
            std::cout << "1\n";

        rn;
    }

    int inox = num[0];
    for (int i = 0; i < n; i++)
    {
        inox = gcd(num[i], inox);
    }

    if (inox == 1)
    {
        std::cout << "0\n";
        rn;
    }

    inox = num[0];
    num[n - 1] = gcd(num[n - 1], n);

    for (int i = 0; i < n; i++)
    {
        inox = gcd(num[i], inox);
    }

    if (inox == 1)
    {
        std::cout << "1\n";
        rn;
    }

    num = res;
    inox = num[0];
    num[n - 2] = gcd(num[n - 2], n - 1);

    for (int i = 0; i < n; i++)
    {
        inox = gcd(num[i], inox);
    }

    // db(num);

    if (inox == 1)
    {
        std::cout << "2\n";
        rn;
    }

    std::cout << "3\n";
}
