#include<stdio.h>

main()
{
	int i = 1,n;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	
	printf("multiplication Table = \n");
	
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}