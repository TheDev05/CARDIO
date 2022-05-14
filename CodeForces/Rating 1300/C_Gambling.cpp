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
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
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
    // std::cin >> testCases;

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

    int n;
    std::cin >> n;

    map<int, int, greater<>> num1, num2;
    loop(0, n)
    {
        int val;
        std::cin >> val;

        num1[val]++;
    }

    loop(0, n)
    {
        int val;
        std::cin >> val;

        num2[val]++;
    }

    /*
    2
    1 4
    5 1
    */

    int val1 = 0, val2 = 0;
    for (int i = 0; std::max(num1.size(), num2.size()) > 0; i++)
    {
        if (i & 1)
        {
            if (num2.size() == 0)
            {
                auto it1 = num1.begin();
                num1[(*it1).first]--;

                if (num1[(*it1).first] == 0)
                {
                    num1.erase((*it1).first);
                }
            }
            else
            {
                if (num1.size() == 0)
                {
                    auto it2 = num2.begin();
                    val2 += (*it2).first;

                    num2[(*it2).first]--;
                    if (num2[(*it2).first] == 0)
                    {
                        num2.erase((*it2).first);
                    }
                }
                else
                {
                    auto it1 = num1.begin();
                    auto it2 = num2.begin();

                    if ((*it2).first >= (*it1).first)
                    {
                        val2 += (*it2).first;

                        num2[(*it2).first]--;
                        if (num2[(*it2).first] == 0)
                        {
                            num2.erase((*it2).first);
                        }
                    }
                    else
                    {
                        num1[(*it1).first]--;
                        if (num1[(*it1).first] == 0)
                        {
                            num1.erase((*it1).first);
                        }
                    }
                }
            }
        }
        else
        {
            if (num1.size() == 0)
            {
                auto it2 = num2.begin();
                num2[(*it2).first]--;

                if (num2[(*it2).first] == 0)
                {
                    num2.erase((*it2).first);
                }
            }
            else
            {
                if (num2.size() == 0)
                {
                    auto it1 = num1.begin();
                    val1 += (*it1).first;

                    num1[(*it1).first]--;
                    if (num1[(*it1).first] == 0)
                    {
                        num1.erase((*it1).first);
                    }
                }
                else
                {
                    auto it1 = num1.begin();
                    auto it2 = num2.begin();

                    if ((*it1).first >= (*it2).first)
                    {
                        val1 += (*it1).first;

                        num1[(*it1).first]--;
                        if (num1[(*it1).first] == 0)
                        {
                            num1.erase((*it1).first);
                        }
                    }
                    else
                    {
                        num2[(*it2).first]--;
                        if (num2[(*it2).first] == 0)
                        {
                            num2.erase((*it2).first);
                        }
                    }
                }
            }
        }

        // db(val1);
        // db(val2);
    }

    // db(val1);
    // db(val2);

    std::cout << val1 - val2 << '\n';
}
