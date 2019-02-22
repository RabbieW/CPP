#include <iostream>
using namespace std;
int main()
{
	int n,x = 1;
	cin >> n;
	for (int y = 1;y <= n;y++)
	{
		for (int i = 1;i <= n-x;i++) cout << " ";
		for (int m = 1;m <= x;m++) cout << m;
		for (int m = x - 1;m >= 1;m--) cout << m;
		cout << endl;
		x++;
	}
}
