#include <stdio.h>
void main()
{
   int month;
   printf("\nInput a month number to get it's name : ");
   scanf("%d",&month);
   switch(month)
   {
	case 1:
	      printf("%dst month is January", month);
	      break;
	case 2:
	      printf("%dnd month is February ",month);
	      break;
	case 3:
	      printf("%drd month is March", month);
	      break;
	case 4:
	      printf("%dth month is April ",month);
	      break;
	case 5:
	      printf("%dth month is May ",month);
	      break;
	case 6:
	      printf("%dth month is June ",month);
	      break;
	case 7:
	      printf("%dth month is July ",month);
	      break;
	case 8:
	      printf("%dth month is August", month);
	      break;
	case 9:
	      printf("%dth month is September ",month);
	      break;
	case 10:
	      printf("%dth month is October", month);
	      break;
	case 11:
	      printf("%dth month is November ",month);
	      break;
	case 12:
	      printf("%dth month is December", month);
	      break;
	default:
	      printf("invalid Month number. \nPlease try again ....\n");
	      break;
   }
	printf("\n");
}