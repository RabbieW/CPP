#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	int a[n + 5],b[n + 5],w[n + 5],h[n + 5],x[n + 5],count = 1,ans = 9999999;
	for (int i = 1;i <= n;i++) cin >> w[i] >> h[i];
	cin >> m;
	for (int i = 2;i <= n;i++)
	{
		for (int j = i - 1;j >= 1;j--)
		{
			if (h[i] >= h[j]) a[i] += w[j];
			else break;
		}
	}
	for (int i = n-1;i >= 1;i--)
	{
		for (int j = i + 1;j <= n;j++)
		{
			if (h[i] >= h[j]) b[i] += w[j];
			else break;
		}
	}
	for (int i = 1;i <= n;i++)
	{
		if (a[i] + b[i] + w[i] >= m && h[i]<=ans) ans=h[i];
	
	}

	cout << ans+m;
}
