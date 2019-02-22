#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n1,n2,n3,x = 0,num = 0;//flag = false;
	while (~scanf("%d %d %d",&n1,&n2,&n3)){
		num++;
		int i;//cout << "Case "<<num<<": ";
		for (i = 10;i <= 100;i++)
		{
			if (i % 3 == n1 && i % 5 == n2 && i % 7 == n3) {
				x = i;
				break;
			}
		}
		if (i == 101) cout << "Case " << num << ": " << "No answer" << endl;//if (flag) cout << "No answer" << endl;
		else cout << "Case " << num << ": " << x << endl;//else cout << x << endl;
	}
}
