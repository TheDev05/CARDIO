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
    std::cin >> testCase;

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

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    ll n, k;
    std::cin >> n >> k;

    vi num(n);
    std::cin >> num;

    ll delta = k - n;
    if (delta < 0)
    {
        std::cout << "NO\n";
        rn;
    }

    ll sum = n;
    srt(num);

    vpi data(n);

    data[0].first = num[0];
    data[0].second = num[0];

    for (ll i = 1; i < n; i++)
    {
        data[i].second = num[i];
        data[i].first = 0;

        if (data[i - 1].second < num[i])
        {
            ll temp = abs(data[i - 1].second - num[i]);
            sum += temp;

            data[i].first = temp;
        }

        if (i == n - 1)
        {
            if (data[0].first < num[i])
            {
                ll temp = abs(data[0].first - num[i]);
                sum += temp;

                data[i].second = temp;
            }
            else
                data[i].second = 0;

            break;
        }
    }

    // db(data);

    sum = 0;
    for (auto i : data)
    {
        sum += i.first;
        sum += i.second;
    }

    // db(delta);
    // db(sum);

    if (sum <= delta)
    {
        std::cout << "YES\n";
    }
    else
        std::cout << "NO\n";
}
