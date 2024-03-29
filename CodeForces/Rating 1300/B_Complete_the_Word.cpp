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

void show(int left, int right, std::string text)
{
    set<char> res;
    char inox = 'A';

    loop(0, 26)
    {
        res.insert(inox);
        inox++;
    }

    for (int i = left; i <= right; i++)
    {
        if (res.count(text[i]))
        {
            res.erase(text[i]);
        }
    }

    auto it = res.begin();
    for (int i = left; i <= right; i++)
    {
        if (text[i] == '?')
        {
            text[i] = (*it);
            it++;
        }
    }

    loop(0, text.size())
    {
        if (text[i] == '?')
        {
            std::cout << "A";
        }
        else
            std::cout << text[i];
    }
}

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    std::string text;
    std::cin >> text;

    // std::cout << text.size();

    if (text.size() < 26)
    {
        std::cout << "-1\n";
        rn;
    }

    map<char, int> data;
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (text[i] == '?')
        {
            count++;
        }
        else
        {
            data[text[i]]++;
        }
    }

    int left, right;
    if (data.size() + count == 26)
    {
        left = 0;
        right = 25;

        show(left, right, text);
        rn;
    }

    int index = 0;
    bool ok = false;

    for (int i = 26; i < text.size(); i++)
    {
        if (text[index] == '?')
        {
            count--;
        }
        else
        {

            data[text[index]]--;

            if (data[text[index]] == 0)
            {
                data.erase(text[index]);
            }
        }

        if (text[i] == '?')
        {
            count++;
        }
        else
            data[text[i]]++;

        if (data.size() + count == 26)
        {
            left = index + 1;
            right = i;

            ok = true;
            break;
        }

        index++;
    }

    if (ok)
    {
        if (count == 0)
        {
            std::cout << text << '\n';
            rn;
        }

        show(left, right, text);
    }
    else
        std::cout << "-1\n";
}
