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
#define vvi vector<vector<ll>>
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
#define rsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define loop(x, n) for (ll i = x; i < n; ++i)
#define db(x) cout << #x << "[" << x << "]" << '\n';
#define xx cout << "Executed Succesfully" << '\n'

clock_t startTime;
double getCurrentTime()
{
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

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

	// fillPrimes();

	int test = 1;
	// std::cin >> test;

	while (test--)
	{
		solve();
	}

	double sec = getCurrentTime();
	// cout << "\n"<< sec << "\n";
}

/* Check: Single testCase or muntiple */

void solve()
{
	/* Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

	https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
    
	 Modification in sliding window problem
	 Naive: TLE */

	string pat, txt;
	std::cin >> pat >> txt;

	std::string window, temp;

	bool ok = true;
	int count = 0;

	window = txt.substr(0, pat.size());
	temp = window;

	for (int j = 0; j < pat.size(); j++)
	{
		if (temp.find(pat[j], 0) == string::npos)
		{
			ok = false;
		}
		else
		{
			int index = temp.find(pat[j], 0);
			temp[index] = '0';
		}
	}

	if (ok)
	{
		count++;
	}

	for (int i = window.size(); i < txt.size(); i++)
	{
		ok = true;

		window += txt[i];
		window.erase(0, 1);

		temp = window;

		for (int j = 0; j < pat.size(); j++)
		{
			if (temp.find(pat[j], 0) == string::npos)
			{
				ok = false;
				break;
			}
			else
			{
				int index = temp.find(pat[j], 0);
				temp[index] = '0';
			}
		}

		if (ok)
		{
			count++;
		}
	}

	return (count);
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/