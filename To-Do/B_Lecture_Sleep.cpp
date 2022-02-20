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
    // std::cin >> testCase;

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

    ll n, k;
    std::cin >> n >> k;

    vi num(n), res(n);
    loop(0, n) std::cin >> num[i];
    loop(0, n) std::cin >> res[i];

    if (n == k)
    {
        ll val = sumof(num);
        std::cout << val << '\n';
        rn;
    }

    if (n == 2)
    {
        if (res[0] + res[1] == 0)
        {
            std::cout << maxin(num) << '\n';
        }
        else
            std::cout << num[0] + num[1] << '\n';
        rn;
    }

    ll sum = 0;
    vpi data(n);

    for (ll i = 0; i < n; i++)
    {
        data[i].first = sum;

        if (res[i] == 1)
        {
            sum += num[i];
        }
        else
            sum = 0;
    }

    sum = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        data[i].second = sum;

        if (res[i] == 1)
        {
            sum += num[i];
        }
        else
            sum = 0;
    }

    sum = 0;
    ll max = imin;
    for (ll i = 0; i < n; i++)
    {
        ll total = 0, index;
        index = (i - k) + 1;

        if (i < k)
        {
            sum += num[i];
        }
        else
        {
            sum += num[i];
            sum -= num[index - 1];

            total += data[i].second + data[index].first;
        }

        total += sum;
        max = std::max(max, total);
    }

    std::cout << max << '\n';
}
