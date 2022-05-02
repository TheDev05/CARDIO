/*
 Believe in your Karma & Keep chanting,

    "Hare Rama Hare Rama, Rama Rama Hare Hare,
     Hare Krishna Hare Krishna, Krishna Krishna Hare Hare !!"

 Username: TheDev05, Happy Coding. <3
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
#define rloop(x, n) for (ll i = n - 1; i >= x; i--)
#define db1(x) cout << #x << "[" << x << "]" << '\n';
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

void read(ll t)
{
    cerr << t;
}

void read(int t) { cerr << t; }
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
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int testCase = 1, gcode = 1;
    // std::cin >> testCase;

    while (testCase--)
    {
        // std::cout << "Case #" << gcode << ":" << '\n';
        // gcode++;

        solve();
    }
}

/* Rule'5: Never Give Up & Keep Hustling */
/* Work hard in silence let your success be the noise */
/* Rise, Grind and Repeat */

int check(vi array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        if (abs(array[i] - array[i + 1]) != 1)
        {
            return (1);
        }
    }

    return (0);
}

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int n, m, max = imin;
    std::cin >> n >> m;

    vector<string> num;
    for (int i = 0; i < n; i++)
    {
        std::string text;
        std::cin >> text;

        num.pb(text);
    }

    vi left, right, data;
    vi left_data, right_data;

    std::string text;
    for (int i = 0; i < n; i++)
    {
        int count = 0, key = 1;
        vi temp;

        for (int j = 0; j < m; j++)
        {
            if (num[i][j] == '*')
            {
                if (key)
                {
                    left.pb(i);
                    key = 0;
                }
                count++;
                temp.pb(j);
            }
        }

        if (key == 0)
        {
            if (count > max)
            {
                data = temp;
                max = count;
            }

            left_data.pb(count);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0, key = 1;
        for (int j = 0; j < n; j++)
        {
            if (num[j][i] == '*')
            {
                if (key)
                {
                    right.pb(i);
                    key = 0;
                }

                count++;
            }
        }

        if (key == 0)
        {
            right_data.pb(count);
        }
    }

    if (count(all(left_data), 1) != left_data.size() - 1)
    {
        std::cout << "NO\n";
        rn;
    }

    if (count(all(right_data), 1) != right_data.size() - 1)
    {
        std::cout << "NO\n";
        rn;
    }

    if (left_data[0] != 1 || left_data[left_data.size() - 1] != 1)
    {
        std::cout << "NO\n";
        rn;
    }

    if (right_data[0] != 1 || right_data[right_data.size() - 1] != 1)
    {
        std::cout << "NO\n";
        rn;
    }

    if (check(left) || check(right) || check(data))
    {
        std::cout << "NO\n";
        rn;
    }

    std::cout << "YES\n";
}
