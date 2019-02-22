#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	int l,count = 0;
	gets(a);
	l = strlen(a);
	for (int i = 0;i <= l - 1;i++)
	{
		if (a[i] >= 48 && a[i] <= 57) cout << a[i];
		if (a[i + 1] > 57 && a[i] <= 57 && a[i] >= 48)
		{
			cout << endl;
			count++;
		}
	}
	if (a[l - 1] >= 48 && a[l - 1] <= 57) 
	{
		cout << endl;
		count ++;
	}
	cout << count;
} 
