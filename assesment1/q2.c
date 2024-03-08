// code for factorial of number


#include<stdio.h>

int main()
{
	int num,result=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(int i=num;i>0;i--)
	{
	result= result * i;
	}
	printf("%d", result);

	return 0;
	
}
