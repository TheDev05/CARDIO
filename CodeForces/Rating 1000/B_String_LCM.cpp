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
	std::cin >> testCase;

	while (testCase--)
	{
		solve();
	}
}

/* Check: Single testCase or muntiple */

void solve()
{
	std::string text1, text2;
	std::cin >> text1 >> text2;

	int count1 = text1.size();
	int count2 = text2.size();

	string prim, sec, result;
	if (count1 < count2)
	{
		prim = text2;
		sec = text1;
	}
	else if (count1 > count2)
	{
		prim = text1;
		sec = text2;
	}
	else
	{
		if (text1 == text2)
		{
			std::cout << text1 << '\n';
		}
		else
			std::cout << "-1\n";

		rn;
	}

	result = prim;
	
	int val = prim.size(), fix = val, count = 2;
	while (val % sec.size() != 0)
	{
		val = fix * count;
		result += prim;

		count++;
	}

	prim = result;
	for (int i = 0; i < prim.size(); i++)
	{
		if (prim[i] == sec[0])
		{
			string delta = prim.substr(i, sec.size());

			if (delta != sec)
			{
				std::cout << "-1\n";
				rn;
			}

			i = (i + sec.size()) - 1;
		}
		else
		{
			std::cout << "-1\n";
			rn;
		}
	}

	std::cout << result << '\n';
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/