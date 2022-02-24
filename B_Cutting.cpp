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
vector<int> lowest_prime(maxlimit, 0);
vector<int> highest_prime(maxlimit, 0);

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
            lowest_prime[i] = highest_prime[i] = i;
            for (int j = 2 * i; j < maxlimit; j += i)
            {
                isPrime[j] = false;

                if (lowest_prime[j] == 0)
                {
                    lowest_prime[j] = i;
                }

                highest_prime[j] = i;
            }
        }
    }
}

#define db(x)   \
    cout << #x; \
    read(x);    \
    cout << endl;

void read(ll t)
{
    cout << t;
}

void read(int t) { cout << t; }
void read(string t) { cout << t; }
void read(char t) { cout << t; }
void read(double t) { cout << t; }
void read(bool t) { cout << t; }

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

    int n, k;
    std::cin >> n >> k;

    vi num(n);
    int even = 0, odd = 0;

    loop(0, n)
    {
        std::cin >> num[i];

        if (num[i] & 1)
        {
            odd++;
        }
        else
            even++;
    }

    if (n == 2)
    {
        std::cout << "0\n";
        rn;
    }

    vi data;
    pi left = {0, 0}, right = {0, 0};
    for (int i = 0; i < n; i++)
    {
        right.first = even - left.first;
        right.second = odd - left.second;

        if (left.f == left.s && right.f == right.s && left.f != 0 && right.f != 0)
        {
            int delta = abs(num[i] - num[i - 1]);
            data.pb(delta);
        }

        if (num[i] & 1)
        {
            left.second++;
        }
        else
            left.first++;
    }

    srt(data);

    int count = 0;
    for (int i = 0; i < data.size(); i++)
    {
        if (k >= data[i])
        {
            k = k - data[i];
            count++;
        }
        else
            break;
    }

    std::cout << count << '\n';
}
