#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabet:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
	    case 'e':
	    case 'i':
	    	case 'o':
	    		case 'u':
	    			printf("%c is vowel",ch);
	    			break;
	    			default:
	    				printf("%c is consonant",ch);
	    			   	
	}
	return 0;
}
