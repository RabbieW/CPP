#include <iostream>
using namespace std;
int main()
{
	int a[101],n,m,x = 0;
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i];
	cin >> m;
	for (int i = 1;i <= n;i++)
	{
		if (a[i] == m)
		{
			cout << i;
			x = i;
			break;
		}
	}
	if (x == 0) cout << "-1";
}
