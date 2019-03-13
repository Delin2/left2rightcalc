/*
** Dennis Lin
** DL142745
** Noah
** Fr_12:35
*/

#include <stdio.h>

int main(void)
{
	char expression[256], op;
	int i = 0, value, num2, opflag = 0;
	
	/*Gets expression*/
    printf("Enter expression: ");
    scanf("%s", expression);	
	value = expression[0];
	
	/*Calculates*/
	while(expression[i] != '\0')
	{
		char curr = expression[i];
		if(curr == ' ')
		{
			i++;
		}else if(curr == '+' || '-' || '*' || '/')
		{
			op = curr;
			i++;
		}else
		{
			num2 = curr;
			switch(op)
			{
				case '+': value = value + num2;
				i++;
				break;
				case '-': value = value - num2;
				i++;
				break;
				case '*': value = value * num2;
				i++;
				break;
				case '/': value = value / num2;
				i++;
				break;
			}
		}
	}
	/*prints value*/
	printf("%d\n" , value);	
}
