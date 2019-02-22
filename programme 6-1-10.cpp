#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 5][n + 5];
	for (int x = 1;x <= n;x++)
	{
		for (int y = 1;y <= n;y++)
		{
			if (x == y) a[x][y] = 1;
			else a[x][y] = 0;
		}
	}
	for (int x = 1;x <= n;x++)
	{
		for (int y = 1;y <= n;y++) cout << setw(3) << a[x][y];
		cout << endl;
	}
}
