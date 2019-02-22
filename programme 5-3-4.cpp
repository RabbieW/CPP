#include<iostream>
using namespace std;
int main()
{
	int n1,n2,x = 0,tmp,y = 1;
	cin >> n1 >> n2;
	for (int i = n1;i <= n2;i++)
	{
		x = 0;
		tmp = i;
		for (y = 1;y <= tmp;y++) if (tmp % y == 0) x += y;
		if (x - tmp == tmp) cout << tmp << " ";
	}
} 
