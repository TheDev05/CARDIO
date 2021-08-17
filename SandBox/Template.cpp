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

/* Extras */
#define en cout << '\n' // NewLine
#define ll long long
#define loop(x, n) for (ll i = x; i < n; ++i)  // Loop
#define db(x) cout << #x << "-> " << x << endl // Debug

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

/* -- -- Here We Go -- -- */

void solve()
{
	int n, t, q;
	std::cin >> n >> t >> q;

	int count = 0, key = 1;

	std::vector<int> res;
	std::vector<int>::iterator index;

	for (int i = 0; i < q; i++)
	{
		string temp;
		int num;

		std::cin >> temp;
		std::cin >> num;

		db(temp[0]);
		db(num);

		if (temp[0] == '+')
		{
			count++;
			res.push_back(num);
		}
		else if (temp[0] == '-')
		{
			count--;

			if (std::find(res.begin(), res.end(), num) == res.end())
			{

				key = 0;
			}
		}

		db(count);
		if (count > t)
		{
			key = 0;
			break;
		}

		if (key == 0)
		{
			// break;
		}
	}

	if (key)
	{
		std::cout << "Consistent\n";
	}
	else
		std::cout << "Inconsistent\n";
}
