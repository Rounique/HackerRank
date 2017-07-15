#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];

		for (int i = 0; i < n; ++i)
		{
			a[i] = 0;
		}

		for (int i = 0; i < n; ++i)
		{
			int x; cin>>x;
			a[x]++;
		}

		for (int i = 1; i < n; ++i)
		{
			a[i] += a[i - 1];
		}

		long long int ways=1;
		for (int i = 0; i < n; ++i)
		{
			ways = ways * (a[i] - i) % 1000000007;
			if(a[i] < i)
				break;
		}
		cout << ways << "\n";
	}
	return 0;
}
