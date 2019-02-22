#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	double b;
	cin >> a;
	b = 3.1415926*2*a;
	cout << setprecision(2) << fixed << b; 
} 
