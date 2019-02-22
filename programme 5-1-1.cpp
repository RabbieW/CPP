#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	double s = 0.0;
	cin >> n;
	for (i = 1;i <= n;i++) s += (double)1/i;
	cout << setprecision(2) << fixed << s;
}
