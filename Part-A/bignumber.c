//C program to find the biggest or three numbers 
#include<stdio.h>
void main()
{
	int num1,num2,num3,big;
	clrscr();
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
	{
		big=num1;
	}
	else if(num2>num3)
	{
		big=num2;
	}
	else
	{
		big=num3;
	}
	printf("Biggest number is %d",big);
	getch();
}

/* OUTPUT 
Enter three numbers:
24
85
33
Biggest Number is 85
*/