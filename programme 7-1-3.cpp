#include <cstdio>
int main()
{
	char a[100],n,bijiao;
	int i = 0;
	bool flag = false;
	while(~scanf("%c",&a[i]) == true)
	{
		i++;
	}
	scanf("%c",&bijiao);
	for (int j = 0;j <= i - 1;j++)
	{
		if (a[j] == bijiao)
		{
			printf("%d",j);
			flag = true;
			break;
		}
	}
	if (flag == false) printf("no");
}
