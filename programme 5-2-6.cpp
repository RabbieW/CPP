#include <iostream>
using namespace std;
int main ()
{
	int i,a1,a2,n,a,b,x=0;
	cin >> n >> a1 >> a2;
	for (i = 1;i <= n;i++)
	{
		if (i % a1 == 0) a = a1;
		else a = i % a1;
		if (i % a2 == 0) b = a2;
		else b = i % a2;
		if (a == b) x++;
	}
	cout << x;
}
