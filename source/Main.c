#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, big = 0, small = 999999, stv[3]; 
	printf("�п�J�T�ӼơG");
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
	printf("�̤j��ơG%d\n�̤p��ơG%d\n", big,small);

	system("pause");
	return 0;

}