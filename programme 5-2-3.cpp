#include <iostream>
using namespace std;
int main()
{
	int n,x = 2;
	cin >> n;
	while(n % x != 0) x++;
	cout << n << "=" << x;
	n /= x;
	x = 2;
	while(n != 1)
	{
		while(n % x != 0) x++;
		cout << "*" << x;
		n /= x;
		x = 2;
	}
}
