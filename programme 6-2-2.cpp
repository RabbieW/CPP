#include <iostream>
using namespace std;
int main()
{
	int n,x,count = 0;
	cin >> n;
	int a[n + 5];
	for (int i = 1;i <= n;i++) cin >> a[i];
	cin >> x;
	for (int i = 1;i <= n - 1;i++)
	for (int j = i + 1;j <= n;j++)
	{
		if (a[i] < a[j])
		{
			int k = a[i];
			a[i] = a[j];
			a[j] = k;
		}
	}
	for (int i = 1;i <= n;i++)
	{
		if (a[i] > x) count++;
		else if (a[i] = x)
		{
			count++;
			break;
		}
		else break;
	}
	cout << count;
} 
