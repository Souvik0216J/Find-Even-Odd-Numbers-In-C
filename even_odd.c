#include<stdio.h>
int main()
{
	int n = 0;
	
	printf("Enter Number: ");
	scanf("%d", &n);
	
	if(n%2 == 0)
	{
		printf("Given Number is Even");
	}
	else
	{
		printf("Given Number is Odd");
	}
	return 0;
}
