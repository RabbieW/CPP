#include<cstdio>
using namespace std;
int main()
{
	char a[100];
	int b[9] = {1,2,3,4,5,6,7,8,9},x = 1,q,sum;
	for (int i = 1;i <= 13;i++) scanf("%c",&a[i]);
	for (int i = 1;i <= 13;i++)
	{
		if (x != 2 && x != 6 && x != 12)
		{
			sum += a[i] * b[x];
		}
		x++;
	}
	q = sum % 11;
	if (q == a[13]) printf("Right");
	else
	{
		for (int i = 1;i <= 12;i++) printf("%c",a[i]);
		printf("%d",q);
	}
} 
