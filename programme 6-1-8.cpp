#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,x = 1;
	cin >> n;
	int a[n + 5][n + 5];
	for (int i = n;i >= 1;i--)
	for (int y = 1;y <= n;y++)
	{
		a[i][y] = x;
		x++;
	}
	for (int i = 1;i <= n;i++)
		{
		for (int y = 1;y <= n;y++)	cout << setw(3) << a[i][y];
		cout << endl;
		}
}
