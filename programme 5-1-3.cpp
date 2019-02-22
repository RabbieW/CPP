#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i,x = 1;
	double s = 0.0;
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		if (x % 2 == 1) s += (double)1 / i;
		else s -= (double)1 / i;
		x += 1;
	}
	cout << setprecision(2) << fixed << s;
}
