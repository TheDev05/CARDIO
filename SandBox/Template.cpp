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
	// std::cin >> test;

	while (test--)
	{
		solve();
	}
}

/* -- -- Here We Go -- -- */

void solve()
{
	int n, q;
	std::cin >> n >> q;

	vector<vector<int>> num(n);

	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		std::cin >> num[i][j];
	// 	}
	// }

	for (int i = 0; i < n; i++)
	{
		int count;
		std::cin >> count;

		num[i] = vector<int>(count);

		for (int j = 0; j < count; j++)
		{
			int temp;
			std::cin >> temp;

			num[i].push_back(temp);
		}
	}

	// for (int i = 0; i < q; i++)
	// {
	// 	int a, b;
	// 	std::cin >> a >> b;

	// 	std::cout << num[a][b] << '\n';
	// }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < num[i].size(); j++)
		{
			std::cout<<num[i][j]<<" ";
		}

		std::cout<<'\n';
		
	}
	
}
