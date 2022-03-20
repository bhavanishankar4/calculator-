#include <stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("enter the operator");
	scanf("%c",&op);
	printf("\n enter two values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case'+':c=a+b;
			printf("%d+%d=%d",a,b,c);
			break;
			
			case'-':c=a-b;
			printf("%d-%d=%d",a,b,c);
			break;
			
			case '/':c=a/b;
			printf("%d / %d=%d",a,b,c);
			break;
			case '%':c=a%b;
			printf("%d MOD %d=%d",a,b,c);
			break;
		default:	printf("invalid operator");
			
			
			
	}
}
