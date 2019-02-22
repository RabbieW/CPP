#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 5],x,k;
	for (int i = 1;i <= n;i++) cin >> a[i];
	cin >> x;
	for (int i = x;i <= n - 1;i++) a[i] = a[i + 1];
	for (int i  =1;i <= n - 1;i++) cout << a[i] << " ";
}
