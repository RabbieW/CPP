#include <iostream>
using namespace std;
int main()
{
	int n,count = 0,x = 1,m,n1,n2;
	cin >> n;
	int a[n + 5];
	for (int i = 0;i <= n - 1;i++)
	{
		a[i] = x;
		x++;
	}
	cin >> m;
	for (int i = 1;i <= m;i++)
	{
		cin >> n1 >> n2;
		for (int j = n1;j <= n2;j++) a[j] = 0;
	}
	for (int i = 0;i <= n - 1;i++)
	{
		if (a[i] != 0) count++;
	}
	cout << count + 1;
}
