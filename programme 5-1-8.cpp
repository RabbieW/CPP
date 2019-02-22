#include <iostream>
using namespace std;
int main()
{
	int n,s=0,i=0,z;
	cin >> n;
	while (s < n)
	{
		i++;
		int tmp=i;
		while (tmp){
			if (tmp % 10 == 1) s++;
			tmp /= 10;
		}
	}
	cout << i;
}
