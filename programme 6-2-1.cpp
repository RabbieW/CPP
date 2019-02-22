#include <iostream>
using namespace std;
int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2} ;
int main()
{
	int x,sum = 0,mod;
	for (int i = 0;i <= 16;i++)
	{
		cin >> x;
		sum += x * a[i];
	}
	mod = sum % 11;
	if (mod == 2) cout << "X";
	else if (mod == 0) cout << 1;
	else if (mod == 1) cout << 0;
	else cout << 12 - mod;
}
