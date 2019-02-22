#include<cstdio>
#include<cstring>
int main()
{
	char a[100];
	gets(a);
	int l = strlen(a);
	for (int i = 0;i <= l - 1;i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] =  (a[i] +3- 65) % 26 + 65;
		printf("%c",a[i]);
	}
}
