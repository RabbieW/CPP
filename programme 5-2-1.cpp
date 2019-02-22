#include<iostream>
int main()
{
	using namespace std;
	int d,n,h,day = 0;
	cin >> d >> n >> h;
	while((h - d) > 0)
	{
		h = h - d + n;
		day ++ ;
	}
	cout << day + 1;
}

