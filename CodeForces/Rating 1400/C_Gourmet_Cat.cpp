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
    // std::cin >> testCases;

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

int fool(int i, int temp1, int temp2, int temp3, std::string text)
{
    int count = 0;
    for (int j = i + 1; j <= i + 7; j++)
    {
        if (text[j] == 'a')
        {
            if (temp1 > 0)
            {
                count++;
                temp1--;
            }
            else
                break;
        }
        else if (text[j] == 'b')
        {
            if (temp2 > 0)
            {
                count++;
                temp2--;
            }
            else
                break;
        }
        else
        {
            if (temp3 > 0)
            {
                count++;
                temp3--;
            }
            else
                break;
        }
    }

    return count;
}

void solve()
{
    // || Jai Shree Krishna ||
    int a, b, c;
    std::cin >> a >> b >> c;

    int val1 = a / 3, val2 = b / 2, val3 = c / 2;
    int min = std::min({val1, val2, val3});

    int inox = min * 7, max = imin;
    std::string text = "abcacbaabcacba";

    int atom1 = a - (min * 3);
    int atom2 = b - (min * 2);
    int atom3 = c - (min * 2);

    for (int i = 0; i < 7; i++)
    {
        int temp1 = atom1, temp2 = atom2;
        int temp3 = atom3, count = 0;

        if (text[i] == 'a' && min == val1)
        {
            count = fool(i, temp1, temp2, temp3, text);
        }
        else if (text[i] == 'b' && min == val2)
        {
            count = fool(i, temp1, temp2, temp3, text);
        }
        if (text[i] == 'c' && min == val3)
        {
            count = fool(i, temp1, temp2, temp3, text);
        }

        max = std::max(count, max);
    }

    std::cout << inox + max << '\n';
}
