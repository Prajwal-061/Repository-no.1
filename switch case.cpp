#include<stdio.h>
int main()
{
	int option;
	printf("enter facebook function\n");
	printf("1message\n 2story\n 3news feed\n ");
	printf("enter your option");
	scanf("%d",&option);
	switch (option)
	{
	
case 1:
	printf("your message was sent");
	break;
	case 2:
		printf("you are viewing story");
		break;
		case 3:
			printf("you are in news feed");
			break;
			default:
			printf("Invalid option");
			break; 
		}
		return 0;
		
}
