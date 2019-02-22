#include <iostream>
using namespace std;
int main()
{
	int m,a = 1;
	cin >> m;
	for (int i = 1;i <= m;i++)
	{
		a = (a + 1) * 2;
	}
	cout << a;
}
