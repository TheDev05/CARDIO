/*
 Believe-in-your-Karma & Keep chanting,

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
#define rloop(x, n) for (ll i = x; i >= n; i--)
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

#define db(x)   \
    cout << #x; \
    read(x);    \
    cout << endl;

void read(int t)
{
    cout << ": " << t;
}

void read(string t) { cout << ": " << t; }
void read(char t) { cout << ": " << t; }
void read(double t) { cout << ": " << t; }
void read(bool t) { cout << ": " << t; }

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
    cout << " {";
    read(p.first);
    cout << ",";
    read(p.second);
    cout << "}";
}

template <class T>
void read(vector<T> v)
{
    cout << ": ";
    for (T i : v)
    {
        read(i);
        cout << " ";
    };
}

template <class T>
void read(set<T> v)
{
    cout << ": ";
    for (T i : v)
    {
        read(i);
        cout << " ";
    };
}

template <class T>
void read(multiset<T> v)
{
    cout << ": ";
    for (T i : v)
    {
        read(i);
        cout << " ";
    };
}

template <class T, class V>
void read(map<T, V> v)
{
    cout << ": ";
    for (auto i : v)
    {
        read(i);
        cout << " ";
    };
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

    int testCase = 1;
    std::cin >> testCase;

    while (testCase--)
    {
        solve();
    }
}

/* Recall Rule'5: Never Give Up & Keep Hustling! */

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int a, b;
    std::cin >> a >> b;

    std::string text;
    std::cin >> text;

    bool ok = false;
    int design = 0;
    loop(0, text.size())
    {
        a = (text[i] == '0') ? a = a - 1 : a;
        b = (text[i] == '1') ? b = b - 1 : b;

        if (text[i] == '?')
            design++;
    }

    if (a < 0 || b < 0)
    {
        std::cout << "-1\n";
        rn;
    }

    // db(a);
    // db(b);

    if (isPalin(text) && design == 0 && text.size() % 2 == 0 && (a > 0 || b > 0))
    {
        std::cout << "-1\n";
        rn;
    }

    if (isPalin(text) && design == 0 && (text.size() & 1) && (a + b > 1))
    {
        std::cout << "-1\n";
        rn;
    }

    if (isPalin(text) && (design == 1) && (text.size() & 1) && text[text.size() / 2] == '?' && (a + b) == 1)
    {
        if (a == 1)
        {
            text[text.size() / 2] = '0';
        }
        else
            text[text.size() / 2] = '1';

        std::cout << text << '\n';
        rn;
    }

    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] == '0' && text[text.size() - 1 - i] != '0')
        {
            if (text[text.size() - 1 - i] == '1')
            {
                ok = true;
            }

            if (a > 0)
            {
                text[text.size() - 1 - i] = '0';
                a--;
            }
            else
                ok = true;
        }
        else if (text[i] == '1' && text[text.size() - 1 - i] != '1')
        {
            if (text[text.size() - 1 - i] == '0')
            {
                ok = true;
            }

            if (b > 0)
            {
                text[text.size() - 1 - i] = '1';
                b--;
            }
            else
                ok = true;
        }
    }

    if (ok)
    {
        std::cout << "-1\n";
        rn;
    }

    reverse(all(text));

    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] == '0' && text[text.size() - 1 - i] != '0')
        {
            if (text[text.size() - 1 - i] == '1')
            {
                ok = true;
            }

            if (a > 0)
            {
                text[text.size() - 1 - i] = '0';
                a--;
            }
            else
                ok = true;
        }
        else if (text[i] == '1' && text[text.size() - 1 - i] != '1')
        {
            if (text[text.size() - 1 - i] == '0')
            {
                ok = true;
            }

            if (b > 0)
            {
                text[text.size() - 1 - i] = '1';
                b--;
            }
            else
                ok = true;
        }
    }

    if (ok)
    {
        std::cout << "-1\n";
        rn;
    }

    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] == '?')
        {
            if (a >= 2)
            {
                text[i] = '0';
                text[text.size() - 1 - i] = '0';

                a = a - 2;
            }
            else if (b >= 2)
            {
                text[i] = '1';
                text[text.size() - 1 - i] = '1';

                b = b - 2;
            }
            else
                ok = true;
        }
    }

    if (ok)
    {
        std::cout << "-1\n";
        rn;
    }

    if ((text.size() & 1) && text[text.size() / 2] == '?')
    {
        if (a == 1)
        {
            text[text.size() / 2] = '0';
            a--;
        }
        else if (b == 1)
        {
            text[text.size() / 2] = '1';
            b--;
        }
        else
            ok = true;
    }

    if (ok)
    {
        std::cout << "-1\n";
        rn;
    }

    if (isPalin(text) && a == 0 && b == 0)
    {
        std::cout << text << '\n';
    }
    else
        std::cout << "-1\n";
}
