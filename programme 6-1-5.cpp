#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	int a[n + 5];
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n - 1;i++) 
	for (int y = i + 1;y <= n;y++)
	{
		if (a[i] > a[y])
		{
			k = a[i];
			a[i] = a[y];
			a[y] = k;
		} 
	}
	for (int i = 1;i <= n;i++) cout << a[i] << " ";
}
