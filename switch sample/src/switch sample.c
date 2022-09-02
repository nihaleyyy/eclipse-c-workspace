/*
 ============================================================================
 Name        : switch.c
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
	printf("1 for PORATA \n2 for BIRIYANI \n3 for FRIEDRICE \n4 for MANDHI \nENTER YOUR CHOICE ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected PORATA");
		break;
	case 2:
		printf("you have selected BIRIYANI");
		break;
	case 3:
		printf("you have selected FRIEDRICE");
		break;
	case 4:
		printf("you have selected MANDHI");
		break;
	default:
		printf("FOOL");
	}
	return EXIT_SUCCESS;
}
