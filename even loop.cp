#include<stdio.h>
int main()
{
	int i,n;
	 printf("print all even number till :");
	 scanf ("%d",&n);
	  printf(" even number  from 1 to %d are : \n",n);
	   for(i=1;i<=n; i++)
	   {
	   	 if (i%2==0)
	   	 {
	   	 	 printf("%d\n",i);
	   	 	 
			}
	   }
	   return 0;	 
}
