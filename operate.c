//Program 13: Program to take operators and operand input from user and operate accordingly
#include <stdio.h>
main()
{
	int a,b,result,f=1;
	printf("Enter two operands and then choose your operator\n + to add\n - to subtract\n * to multiply\n / to divide\n %% to get reminder\n");
	printf("Enter operands: \n");
	scanf("%d %d",&a,&b);
	char op;
	printf("Enter operator: ");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
		{
			result=a+b;
			break;
		}
		case '-':
		{
			result=a-b;
			break;
		}
		case '*':
		{
			result=a*b;
			break;
		}
		case '/':
		{
			result=a/b;
			break;
		}
		case '%':
		{
			result=a%b;
			break;
		}
		default:
		{
			printf("Invalid Operator\n");
			f=0;
			break;
		}
	}
	if(f==1)
		printf("Result: %d \n",result);
}
/*
Output 1:
Enter two operands and then choose your operator
 + to add
 - to subtract
 * to multiply
 / to divide
 % to get reminder
Enter operands: 
54
29
Enter operator: +
Result: 83 

Output 2:
Enter two operands and then choose your operator
 + to add
 - to subtract
 * to multiply
 / to divide
 % to get reminder
Enter operands: 
54
29
Enter operator: -
Result: 25 

Output 3:
Enter two operands and then choose your operator
 + to add
 - to subtract
 * to multiply
 / to divide
 % to get reminder
Enter operands: 
54
29
Enter operator: *
Result: 1566 

Output 4:
Enter two operands and then choose your operator
 + to add
 - to subtract
 * to multiply
 / to divide
 % to get reminder
Enter operands: 
54
29
Enter operator: /
Result: 1 

Output 5:
Enter two operands and then choose your operator
 + to add
 - to subtract
 * to multiply
 / to divide
 % to get reminder
Enter operands: 
54
29
Enter operator: %
Result: 25 
*/

