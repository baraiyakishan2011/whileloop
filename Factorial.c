#include<stdio.h>

main()
{
	int i = 1,n,f = 1;
	
	printf("Enter factorial number = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f = f * i;
		i++;
	}
	
	printf("The factorial of %d is %d\n",n,f);
}