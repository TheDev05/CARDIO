

/*
 StayWithKarma & repeat this,

    "Hare Krishna Hare Krishna, Krishna Krishna Hare Hare,
     Hare Rama Hare Rama, Rama Rama Hare Hare !!"

 Username: TheDev05, Happy Coding <3
*/

#include <bits/stdc++.h>
using namespace std;

/* Limits */
#define imax INT_MAX
#define imin INT_MIN

/* Pairs */
#define pi pair<ll, ll>
#define ps pair<string, string>
#define pis pair<ll, string>
#define psi pair<string, ll>
#define mp make_pair
#define f first
#define s second

/* Maps */
#define mpi map<ll, ll>
#define mps map<string, string>
#define mpis map<ll, string>
#define mpsi map<string, ll>
#define mpic map<ll, char>
#define mpci map<char, ll>

/* Vectors */
#define vi vector<ll>
#define vs vector<string>
#define sumof(v) accumulate(v.begin(), v.end(), 0);
#define vpi vector<pair<ll, ll>>
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define rn return
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define db(x) cout << #x << "[" << x << "]" << '\n';
#define xx cout << "Executed Succesfully" << '\n'

void solve();

const ll maxlimit = 1e7 + 10;
vector<bool> isPrime(maxlimit, 1);

void fillPrimes()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i < maxlimit; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < maxlimit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);

    /* Input-Output data from text file */
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // fillPrimes();

    int test = 1;
    std::cin >> test;

    while (test--)
    {
        solve();
    }
}

/* Check: Single testCase or muntiple */

void solve()
{
    int n;
    std::cin >> n;

    int sum = 0;
    vi num, data, result;

    for (int i = 0; i < 2 * n; i++)
    {
        int val;
        std::cin >> val;

        num.pb(val);
        data.pb(0);
    }

    for (int i = 0; i < num.size(); i++)
    {
        if (i == 0)
        {
            if ((num[num.size() - 1] + num[1]) / 2 == num[i])
            {
                data[i] = 1;
            }
        }
        else if (i == num.size() - 1)
        {
            if ((num[num.size() - 2] + num[0]) / 2 == num[i])
            {
                data[i] = 1;
            }
        }
        else
        {
            if ((num[i - 1] + num[i + 1]) / 2 == num[i])
            {
                data[i] = 1;
            }
        }
    }

    for (int i = 0; i < num.size(); i++)
    {
        if (data[i] == 1)
        {
            bool ok = false;
            for (int j = 0; j < num.size() && j != i; j++)
            {
                if (data[j] == 1)
                {
                    if (j == 0 && (num[num.size() - 1] + num[1]) / 2 != num[j])
                    {
                        ok = true;
                        swap(num[i], num[j]);

                        data[i] = 0;
                        data[j] = 0;
                    }
                    else if (j == num.size() - 1 && (num[num.size() - 2] + num[0]) / 2 != num[j])
                    {
                        ok = true;
                        swap(num[i], num[j]);

                        data[i] = 0;
                        data[j] = 0;
                    }
                    else if ((num[j - 1] + num[j + 1]) / 2 != num[j])
                    {
                        ok = true;
                        swap(num[i], num[j]);

                        data[i] = 0;
                        data[j] = 0;
                    }
                }
            }

            if (ok == false)
            {
                swap(num[i], num[i + 2]);
            }
        }
    }

    for (auto i : num)
        std::cout << i << " ";
    en;
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/