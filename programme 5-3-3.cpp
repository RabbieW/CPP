#include <iostream>
using namespace std;
int main()
{
	int n1,n2,x,a = 2,tmp,y = 0;
	cin >> n1 >> n2;
	for (int i = n1;i <= n2;i++)
	{
		x = 0;
		tmp = i;
		while (tmp != 0)
			{	
				x += tmp % 10;
				tmp /= 10;
			}
		if (x == 10 && i % 2 == 1) 
		{
			while (i % a != 0) a++;
			if (a == i) y = i;
			break;
		}
	}
	if (y != 0) cout << y;
	else cout << "no";
}
