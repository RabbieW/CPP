#include <iostream>
using namespace std;
int main()
{
	int n,min;
	bool flag;
	cin >> n;
	int a[n + 5];
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = a[1];i >= 1;i--)
	{
		flag = true;
		for (int j = 1;j <= n;j++)
		{
			if (a[j] % i != 0)
			{
				flag = false;
				break;	
			}
		}
		if (flag == true) 
		{
			cout << i;
			break;
		}
	}
}
