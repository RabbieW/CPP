#include<iostream>
using namespace std;
int main()
{
	int n,x = 1;
	cin >> n;
	while (n - x >= n || 2 * x - n < n - x) x *= 2;
	cout << x;
}
