#include <iostream>
using namespace std;
int main()
{
	int l = 1,r,n,x,mid,output = -1;
	cin >> n;
	int a[n+1];
	for (int i = 1;i <= n;i++) cin >> a[i];
	cin >> x;
	l = 1;
	r = n;
	while(l <= r)
	{
		mid = (l + r) / 2;
		if (a[mid] == x)
		{
			output = mid;
			break;
		}
		else if (a[mid] > x) r = mid - 1;
		else l = mid + 1;
	}
	cout << output;
} 
