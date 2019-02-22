#include <iostream>
using namespace std;
int main()
{
	int n,x = 0,a = 0;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		 a += i;
		 x += a;
	}
	cout << x;
}
