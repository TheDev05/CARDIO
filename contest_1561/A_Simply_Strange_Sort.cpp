/*** Hello Stalker!,
  * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
  * With Gods' Grace, Let's begin today's journey!
  * Handle: at all platform: TheDev05, except CodeChef: WhoCares05; Happy Coding >_<
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

/* Vectors */
#define vi vector<int>
#define vs vector<string>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define pb push_back
#define ppb pop_back

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define loop(x, n) for (ll i = x; i < n; ++i)  // Loop
#define db(x) cout << #x << "-> " << x << endl // Debug
#define xx cout << "Executed Succesfully" << '\n'

void solve();

int main()
{
	ios_base::sync_with_stdio(false);
	std::cout << std::setprecision(10);
	std::cout << std::fixed;

	cin.tie(NULL);
	cout.tie(NULL);

	int test = 1;
	std::cin >> test;

	while (test--)
	{
		solve();
	}
}

int atom = 0, node = 0;

/* -- -- Here We Go -- -- */

void solve()
{
	int n;
	std::cin >> n;

	int key = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		if ((temp - 1) == key)
		{
			// db(temp);
			count++;
		}

		key = temp;
	}

	if (count == n)
	{
		std::cout << "0\n";
		return;
	}

	std::cout << (n - (count * 2)) << '\n';
}