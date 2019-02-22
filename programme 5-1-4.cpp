#include <iostream>
using namespace std;
int main()
{
	int n,i,s1,s2 = 0;
	cin >> n;
	for (i = 1;i <= n;i+=2)
	{
		s1 = ((i + 1) / 2) * ((i + 1) / 2);
		s2 += s1;
	}
	cout << s2;
}
