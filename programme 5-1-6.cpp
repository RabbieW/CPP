#include <iostream>
using namespace std;
int main()
{
	int n,s = 0,a,b,c,i = 2;
	cin >> n;
	a = 1;
	b = 1;
	while (s < n)
	{
		c = a + b;
		a = b;
		b = c;
		s += c;
		i++;
	}
	cout << i;
}
