#include<stdio.h>
main() 
{

	int police,girl,boy;
	printf("Police = ");
	scanf_s("%d", &police);
	printf("Girl = ");
	scanf_s("%d", &girl);
	printf("Boy = ");
	scanf_s("%d", &boy);
	if (police >= 0 && girl >= 0 && boy >= 0)
	{
		int* shadow[3];
		shadow[0] = &police;
		shadow[1] = &girl;
		shadow[2] = &boy;


		int i = 0;
		for (i = 0;i < 3;i++) {
			printf("\nshadow[%d] = %d", i, *(shadow[i]));
		}
	}
	else
	{
		printf("ERROR");
	}
	return 0;
}