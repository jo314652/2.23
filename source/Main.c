#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, big = 0, small = 999999, stv[3]; 
	printf("叫块计");
	for (x = 0; x < 3; x++)
	{
		scanf_s("%d", &stv[x]);
	}
	for (x = 0; x < 3; x++)
	{
		if (stv[x]>big)
			big = stv[x];
		if (stv[x] < small)
			small = stv[x];
	}
	printf("程俱计%d\n程俱计%d\n", big,small);

	system("pause");
	return 0;

}