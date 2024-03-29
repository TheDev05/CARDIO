/*
 Believe-In-your-Karma & chant with me,

	"Hare Rama Hare Rama, Rama Rama Hare Hare,
	 Hare Krishna Hare Krishna, Krishna Krishna Hare Hare !!"

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
#define vpi vector<pair<ll, ll>>
#define sumof(v) accumulate(v.begin(), v.end(), 0);
#define vvi vector<vector<ll>>
#define pb emplace_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define rn return
#define size(x) (x).size()
#define all(x) (x).begin(), (x).end()
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

/* Check: Single testCase or muntiple */

void solve()
{
	int n;
	std::cin >> n;

	if (n == 1)
	{
		std::cout << "1\n";
		rn;
	}
	else if (n == 2)
	{
		std::cout << "3\n";
		rn;
	}

	int total = n;
	int count = 2;
	int sum = 0;

	sum += total;
	total--;

	for (int i = 0; i < n; i++)
	{
		if (total == 2)
		{
			sum += (n - 1) + 1;
			break;
		}

		sum += (total - 1) * count + 1;

		total--;
		count++;
	}

	std::cout << sum + 1 << '\n';
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/