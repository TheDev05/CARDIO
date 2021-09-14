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
#define mp make_pair
#define f first
#define s second

/* Maps */
#define mpi map<int, int>
#define mps map<string, string>

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
#define loop(x, n) for (ll i = x; i < n; ++i)  // Loop
#define db(x) cout << #x << "-> " << x << endl // Debug
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
	// std::cin >> test;

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

	vi num;
	for (int i = 0; i < n; i++)
	{
		int val;
		std::cin >> val;

		num.pb(val);
	}

	int l = imin, r = imax;
	vpi res;

	for (int i = 2; i < n; i++)
	{
		int min = std::min(num[i - 1], num[i - 2]);
		int max = std::max(num[i - 2], num[i - 1]);

		if (num[i] < max && num[i] > min)
		{
			l = min;
			r = max;
		}
		else
		{

			int temp1 = min;
			int temp2 = max;

			res.pb(mp(temp1, temp2));
		}

		for (int j = 0; j < res.size(); j++)
		{
			if (num[i] > res[j].first && num[i] < res[j].second)
			{
				std::cout << "yes\n";
				return;
			}
		}

		if (num[i] > l && num[i] < r)
		{
		}
		else
		{
			std::cout << "yes\n";
			return;
		}
	}

	std::cout << "no\n";
}

/* Reminder:
1. Check Corner Cases, Least Input & Max Input.
2. Check for Inputs: 0, 1, 2, 3 & n-2, n-1, n.
3. Long Long vs Int vs unsigned.
4. All input equal, Input Repeated, Negative.
5. Time Complexity.
6. Float-Double Precisions.
*/