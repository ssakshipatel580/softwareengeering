#include<stdio.h>
int main()
{
	int day;
	printf("monday\n");
	printf("tuesday\n");
	printf("wednesday");
	printf("thrusday");
	printf("friday");
	printf("saturday");
	printf("sunday");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		  printf("monday");
		  break;
		case 2:
		  printf("tuesday");
		  break;
		case 3:
		  printf("wednesday");
		  break;
		case 4:
		  printf("thrusday");
		  break;
		case 5:
		  printf("friday");
		  break;
		case 6:
		  printf("saturday");
		  break;
		case 7:
		  printf("sunday");
		  break;
		default :
			printf("invalid input ! please enter week number between 1-7.");
			break;
			
		}
	return 0;
}
