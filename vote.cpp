#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the current of year");
	scanf("%d",&x);
	printf("enter the birth of year");
	scanf("%d",&y);
	 if (x-y>=18)
	 printf("your age is %d are eligible for casting your vote");
	 else
	 printf(" your age is %d are not eligible for casting your vote");
}
