//C program to check if palindrome
#include<stdio.h>
void main()
{
	int num,temp,digit,sum=0,rev=0;
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit = num%10;
		num=num/10;
		sum=sum+digit;
		rev=rev*10+digit;
	}
	printf("\n Sum of digits=%d",sum);
	printf("\n Reveerse Number=%d",rev);
	if(rev==temp)
	{
		printf("\n %d is Palindrome.",temp);
	}
	else
	{
		printf("\n %d is not a Palindrome.",temp);
	}
	getch();
}