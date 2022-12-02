#include<stdio.h>
#include<conio.h>
void main()
{
int num1=20,num2=24,i,n,hcf=1;
clrscr();

	n=(num1<num2)? num1: num2;

	for(i=1;i<=n;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf = i;
		}
	}
	printf("The HCF Of Given Value Is %d",hcf);

getch();
}