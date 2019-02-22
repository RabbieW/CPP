#include<iostream>
using namespace std;
int main()
{
	int n,a = 0,i = 0,x;
	cin >> n;
	while (n != 153)
	{
		x = n;
		a = 0;
		while (x != 0)
		{
			a += (x % 10) * (x % 10) * (x % 10);
			x /= 10;
		}
		i++;
		n = a;
	}
	cout << i;
} 
