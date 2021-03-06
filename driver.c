#include <stdio.h>
#include "stack.h"

int main(void){
/**/

    char input;
	int keepGoing = 1;
	int mode = 0;
	int pushVal;
	int popVal;
	printf("%s","Welcome to the stack program.\n");
	
	while(keepGoing == 1){
		printf("\nEnter option: ");
		scanf(" %c",&input);
		switch(input){
			case 'u':
				printf("%s","What number? ");
				scanf(" %d",&pushVal);
				if(push(pushVal)){
					printf("Overflow!!!\n");
				}
				print_stack(mode);
				break;

			case 'o': 
			    if(pop(&popVal)){
			    	printf("Underflow!!!\n");
			    }
			    else{
			    	printf("%s", "Popped");
			    	printf(" %d",popVal);
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
				keepGoing = 0;
				break;
                        default:
				printf("\n");
		}
	} 
	printf("Goodbye!");
	return 0;
}
