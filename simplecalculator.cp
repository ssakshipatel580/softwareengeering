#include<stdio.h>
int main()
{
	char op;
	double first, second;
	printf("enter an operator(+, -, *, / ):");
	scanf("%c", &op);
	printf("enter two operands: ");
	scanf("%lf %lf", &first,&second);
	
	switch(op)
	
	{
		case'+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first+second);
			
		case'-':
		    printf("%.1lf - %.1lf = %.1lf", first, second, first-second);
			
		case'*':
		    printf("%.1lf * %.1lf = %1.lf", first, second, first*second);
		    
		case'/':
		    printf("%.1lf / %1.lf = %1.lf", first, second, first/second);
		    
		    
						
	}
	return 0;
}

