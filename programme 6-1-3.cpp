#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cin >> n;
	cin >> x;
	int a[x + 5];
	for (int i = 1;i <= x;i++) cin >> a[i];
	a[x + 1] = n;
	for (int i = 1;i <= x - 1;i++)
	{
		for (int y = 2;y <= x;y++)
		{
			for (int w=1;w<=x;w++) 
			for (int j=i+1;j<=x + 1;j++) 
			{
				if(a[w]>a[j])
				{ 
					int k=a[w]; 
					a[w]=a[j]; 
					a[j]=k; 
				}
			}
		}
	}
	for (int i = 1;i <= x + 1;i++) cout << a[i] << " ";
}
