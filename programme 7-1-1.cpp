#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char a[100];
	gets(a);
	int l = strlen(a);
	for (int i = 0;i <= l-1;i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		else if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
		printf("%c",a[i]);
	}
}
