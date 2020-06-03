#include<stdio.h>

int main()
{
	int c;
	c=getchar();
	printf("The vlue of EOF is :%d\n",EOF);
	while(c != EOF)
	{	
		printf("%d\n",getchar());
		putchar(c);
		c=getchar();
	}
	printf("The vlue of EOF is :%d\n",EOF);
	return 0;
}
