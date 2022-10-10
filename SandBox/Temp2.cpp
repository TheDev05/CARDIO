/*** Hello Stalker!,
  * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
  * With Gods' Grace, Let's begin today's journey!
  * Username: at all platform: TheDev05, except CodeChef: WhoCares05; Happy Coding >_<
 ***/

#include <bits/stdc++.h>
using namespace std;

/* Limits */
#define imax INT_MAX
#define imin INT_MIN

/* Pairs */
#define pi pair<int, int>
#define ps pair<string, string>
#define pis pair<int, string>
#define psi pair<string, int>
#define mp make_pair
#define f first
#define s second

/* Maps */
#define mpi map<int, int>
#define mps map<string, string>
#define mpis map<int, string>
#define mpsi map<string, int>
#define mpic map<int, char>
#define mpci map<char, int>

/* Vectors */
#define vi vector<int>
#define vs vector<string>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define maxin(v) *max_element(v.begin(), v.end())
#define minin(v) *min_element(v.begin(), v.end())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define srt(v) sort(v.begin(), v.end())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define db(x) cout << #x << "-> " << x << endl
#define xx cout << "Executed Succesfully" << '\n'

clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve();

int main()
{
    startTime = clock();

    ios_base::sync_with_stdio(false);
    std::cout << std::setprecision(10);
    std::cout << std::fixed;

    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));

    /* Input-Output data from text file */
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int test = 1;
    std::cin >> test;

    while (test--)
    {
        solve();
    }

    double sec = getCurrentTime();
    // cout << "\n"<< sec << "\n";
}

int atom = 0, node = 0;

/* Check: Single testCase or muntiple */

void solve()
{
    int n;
    std::cin >> n;

    string text;
    for (int i = 0; i < n * 2; i++)
    {
        if (i < n)
        {
            text += '(';
        }
        else
            text += ')';
    }

    std::cout << text << '\n';
    int pos = text.size() - 1;
    int index = 0;

    for (int i = 0; i < n - 1; i++)
    {
        text.insert(pos, 1, '(');
        text.erase(index, 1);
        
        std::cout << text << '\n';

        pos = pos - 2;
    }
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/