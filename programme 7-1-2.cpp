#include <stdio.h>
#include <cstring>
int main()
{
	char a[100];
	bool flag;
	gets(a);
	int l = strlen(a);
	for (int i = 0;i <= l-1;i++)
	{
		if (a[i] == a[l - 1 - i]) flag = true;
		else
		{
			flag = false;
			break;
		}
	}
	if (flag) printf("yes");
	else printf("no");
} 
