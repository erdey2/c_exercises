#include <stdio.h>
void showbit(unsigned char);
int main(void)
{
	unsigned char n = 0x7c, j;

	showbit(n);
	j = 0x08;
	if (n & j)
	{
		printf("3rd bit is set\n");
		printf("making 3rd bit off\n");
		n ^= j;
	}
	else
		printf("the 3rd bit is not set\n");
	j = 0x40;
	if (n & j)
		printf("6th bit is set\n");
	else
		printf("6th bit not set\n");
	j = 0x80;
	if (n & j)
		printf("7th bit is set\n");
	else
		printf("7th bit not set\n");
	showbit(n);
	return 0;
}
void showbit(unsigned char n)
{
	int i;
	for(i = 7; i >= 0; i--)
		if (n & (1 << i))
			printf("1");
		else
			printf("0");
	printf("\n");
}
