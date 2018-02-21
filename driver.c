#include <stdio.h>
#include "stack.h"

int main(void){


    char input;
	int cont = 1;
	int mode = 0;
	int num;
	int val;
	printf("%s","Welcome to the stack program.\n");
	
	while(cont == 1){
		printf("\nEnter option: ");
		scanf(" %c",&input);
		switch(input){
			case 'u':
				printf("%s","What number? ");
				scanf(" %d",&num);
				if(push(num)){
					printf("Overflow!!!\n");
				}
				else{
				        print_stack(mode);
				}
				break;

			case 'o': 
			    if(pop(&val)){
			    	printf("Underflow!!!\n");
			    }
			    else{
			    	printf("%s", "Popped");
			    	printf(" %d",val);
			    	printf("\n");
			    }
			   
				print_stack(mode);
				break;

			case 'c':
				mode = 2;
				print_stack(mode);
				break;

			case 'd':
				mode = 0;
				print_stack(mode);
				break;

			case 'h':
				mode = 1;
				print_stack(mode);
				break;
				
			case 'x':
				cont = 0;
				break;
                        default:
				printf("\n");
		}
	} 
	printf("Goodbye!");
	return 0;
}
