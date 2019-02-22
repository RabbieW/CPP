#include <iostream>
using namespace std;
int n,x,count = 0;
int main()
{
	cin >> n >> x;
	int a[n + 5];
	for (int i = 1;i <= n;i++) 
	{
		cin >> a[i];
		if (x >= a[i]) count++;
	}
	cout << count;
}
