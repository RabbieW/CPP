#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i = 1;
	cin >> n;
	int a[n + 5][n + 5];
	for (int y = 1;y <= n;y++)
	{
		for (int x = 1;x <= n;x++)
		{
			a[x][y] = i;
			i++;
		}
	}
	for (int x = 1;x <= n;x++)
	{
		for (int y = 1;y <= n;y++) cout << setw(3) << a[x][y];
		cout << endl;
	}
}
