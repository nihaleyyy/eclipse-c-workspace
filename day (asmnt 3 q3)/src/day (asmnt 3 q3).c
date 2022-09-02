/*
 ============================================================================
 Name        : day.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int choice;
	printf("1 for SUNDAY \n2 for MONDAY \n3 for TUE \n4 for WED \n5 for THUR \n6 for FRI \n7 for SAT \nENTER YOUR CHOICE ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("today is SUNDAY");
		break;
	case 2:
		printf("today is MONDAY");
				break;
	case 3:
		printf("today is TUE");
				break;
	case 4:
		printf("today is WED");
				break;
	case 5:
		printf("today is THUR");
				break;
	case 6:
		printf("today is FRI");
				break;
	case 7:
		printf("today is SAT");
				break;
	default:
		printf("invalid entry");

	}
	return EXIT_SUCCESS;
}
