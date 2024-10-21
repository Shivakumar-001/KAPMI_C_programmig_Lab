//C  program to read the numbers until the users presses 999 and the sum
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0;
	clrscr();
	while(1)
	{
		printf("Enter any number:\n");
		scanf("%d",&num);
		if(num>0&&num!=999)
		{
			sum=sum+num;
		}
		if(num==999)
		{
			printf("Sum of positive numbers ar=%d",sum);			getch();
			exit(0);
		}
	}
	getch();
}