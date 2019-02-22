#include <iostream>
using namespace std;
int main()
{
	int n1,n2,x = 0;
	cin >> n1 >> n2;
	for (int i = n1;i <= n2;i++)
	{
		int a = 0;
		int j = i;
		while (j != 1)
		{
			if (j % 2 == 0) j /= 2;
			else j = 3 * j + 1;
			a += 1;
		}
		if (x <= a) x = a + 1;
	}
	cout << x;
} 
