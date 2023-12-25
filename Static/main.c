#include <stdio.h>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Modulus.h"


void main (void)
{
	int x, y, oper, result;
	float div_result;
	
	printf("Enter first number\t");
	scanf("%d",&x);
	
	printf("Enter first number\t");
	scanf("%d",&y);
	
	printf("Enter the number of operation you want:\n\t\t1. +\n\t\t2. -\n\t\t3. *\n\t\t4. /\n\t\t5. mod\n");
	scanf("%d",&oper);
	
	switch (oper)
	{
		case 1:
		{
			result=addition(x,y);
			printf("%d + %d = %d", x,y, result);
		}
			break;
		
		case 2:
		{
			result=subtraction(x,y);
			printf("%d - %d = %d", x,y, result);
		}
			break;
		
		case 3:
		{
			result=multiplication(x,y);
			printf("%d * %d = %d", x,y, result);
		}
			break;

		case 4:
		{
			div_result=division(x,y);
			printf("%d / %d = %.2f", x,y, div_result);
		}
			break;
			
		case 5:
		{
			result=modulus(x,y);
			printf("%d mod %d = %d", x,y, result);
		}
			break;
			
		default:
		{
			printf("Wrong Operation");
		}
			break;
			
	}
	


}
