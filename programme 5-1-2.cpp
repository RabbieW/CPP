#include <iostream>
using namespace std;
int main()
{
	int n,x;
	for (n = 2;n <= 1000;n++)
	{
		x=n*n;
		if (x % 10 == n || x % 100 == n || x % 1000 == n) cout << n << " "; 
	} 
}
