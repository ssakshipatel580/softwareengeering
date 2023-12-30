#include<stdio.h>
int main()
{
	 int num;
	 printf("enter the year.");
	 scanf("%d",&num);
	 
	 if(num %4 == 0)
	 {
	 	printf("%d is a leap year.",num);
	
	 }
	 else
	 {
	 	printf("%d is not a leap year.",num);
	 	
	 }
	 
	return 0;
}
