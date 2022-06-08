/*
 Believe in your Karma & Keep chanting,

    "Hare Rama Hare Rama, Rama Rama Hare Hare,
     Hare Krishna Hare Krishna, Krishna Krishna Hare Hare !!"

 Happy Coding. <3
*/

#include <bits/stdc++.h>
using namespace std;

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
#define xx cout << "Good 😊" << '\n';

const int maxlimit = 1e7 + 10;
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

struct MyComp
{
    // cmp() for set-pair, sort set by second value or index.
    bool operator()(const pair<int, int> &x, const pair<int, int> &y) const
    {
        return x.second < y.second;
    }

    // Call with: set<pair<int, int>, MyComp> data;
};

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
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int testCases = 1, gcode = 1;
    std::cin >> testCases;

    while (testCases--)
    {
        // std::cout << "Case #" << gcode << ": ";
        // gcode++;

        solve();
    }
}

/* Rule'5: Never Give Up & Keep Hustling */
/* Work hard in silence let your success be the noise */
/* Rise, Grind and Repeat */

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int n, k, temp;
    std::cin >> n >> k;

    temp = k;
    vi num;

    std::string text, result;
    std::cin >> text;

    if (k == 0)
    {
        std::cout << text << '\n';
        rn;
    }

    int one = count(all(text), '1');
    int zero = count(all(text), '0');

    if (k & 1)
    {
        if (k < one)
        {
            for (int i = 0; i < n; i++)
            {
                if (text[i] == '1')
                {
                    if (k > 0)
                    {
                        num.pb(1);
                    }
                    else
                        num.pb(0);

                    k--;
                }
                else
                    num.pb(0);

                if (k == 0)
                {
                    continue;
                }

                if (text[i] == '0')
                {
                    text[i] = '1';
                }
                else
                    text[i] = '0';
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (k > 0 && text[i] == '1')
                {
                    num.pb(1);
                    k--;
                }
                else
                    num.pb(0);

                if (text[i] == '0')
                {
                    text[i] = '1';
                }
            }

            if (text[n - 1] == '1')
            {
                one = one - 1;
            }

            if (one & 1)
            {
                if (text[n - 1] == '1')
                {
                    text[n - 1] = '0';
                }
                else
                    text[n - 1] = '1';
            }
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (k > 0 && text[i] == '0')
            {
                num.pb(1);
                k--;
            }
            else
                num.pb(0);

            if (text[i] == '0')
            {
                text[i] = '1';
            }
        }

        if (text[n - 1] == '0')
        {
            zero = zero - 1;
        }

        if (zero & 1)
        {
            if (text[n - 1] == '1')
            {
                text[n - 1] = '0';
            }
            else
                text[n - 1] = '1';
        }
    }

    std::cout << text << '\n';
    std::cout << num;

    en;
}
