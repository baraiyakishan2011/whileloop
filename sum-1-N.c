#include<stdio.h>

main()
{
	int i = 1,n,sum = 0;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	
	printf("Sum of 1 to N = %d",sum);
}