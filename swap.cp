#include<stdio.h>
 int main()
 {
 	 int x,y,z;
 	 printf("enter the value of x");
 	 scanf("%d", &x);
 	 printf("enter the valuen of y");
 	 scanf ("%d",&y);
 	 printf("enter the value of z");
 	 scanf ("%d",&z);
 	 x=y;
 	 y=x;
 	 printf("\n after swapping : x = %d, y = %d" ,x,y);
 	 return 0;
 }
