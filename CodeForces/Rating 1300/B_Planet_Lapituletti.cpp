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

int fool(char a, char b)
{
    int val = ((int)(a - '0'));
    val = val * 10;
    val = val + ((int)(b - '0'));

    return (val);
}

pair<bool, string> check(std::string temp)
{
    std::string text, data = "01528";
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        if (temp[i] == '5')
        {
            text += '2';
        }
        else if (temp[i] == '2')
        {
            text += '5';
        }
        else
            text += temp[i];
    }

    if (data.find(text[0]) != string::npos && data.find(text[1]) != string::npos && data.find(text[3]) != string::npos && data.find(text[4]) != string::npos)
    {
        return (mp(true, text));
    }
    else
        return (mp(false, text));
}

std::string inox(int a, int b)
{
    string a1, a2, temp;

    if (a < 10)
        a1 += '0';

    if (b < 10)
        a2 += '0';

    a1 += to_string(a);
    temp = a1;

    temp += ':';

    a2 += to_string(b);
    temp += a2;

    return (temp);
}

void solve()
{
    // Reminder: TestCases are single/multiple?
    // 🌻|Hare Krishna|🌻

    int hour, min;
    std::cin >> hour >> min;

    std::string temp, text;
    std::cin >> temp;

    int left = fool(temp[0], temp[1]);
    int right = fool(temp[3], temp[4]);

    // db(left);
    // db(right);

    while (1)
    {
        temp = inox(left, right);
        if (check(temp).first)
        {
            text = check(temp).second;

            int val1 = fool(text[0], text[1]);
            int val2 = fool(text[3], text[4]);

            if (val1 < hour && val2 < min)
            {
                std::cout << temp << '\n';
                rn;
            }
        }

        right++;
        if (right >= min)
        {
            left++;
            right = 0;

            if (left >= hour)
            {
                left = 0;
            }
        }
    }
}
