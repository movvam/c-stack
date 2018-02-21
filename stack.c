#include <stdio.h>

int stack[10]; 
int *stackPointer = stack - 1;

int push(int value){
	if(stackPointer + 1 >= &stack[0] + 10){
		return 1;
	}
	stackPointer = stackPointer + 1;
	*stackPointer = value;
	return 0;
}

int pop(int *value){
	if(stackPointer >= stack){
		*value = *stackPointer;
	        stackPointer = stackPointer -1;
		return 0;
	}
	return 1;	
}

void print_stack(int mode){
	int *i;
	if(stackPointer >= stack){
		printf("%s","Stack:");
		for(i = &stack[0]; i<=stackPointer; i++){
			if(mode==0){ 
				printf(" %d", *i);
			}
	    	        else if(mode ==1){ 
	    		        printf(" %x", *i);
	    	}
	    	        else if(mode == 2){ 
	    		        printf(" %c", *i);
	    	}
		}
	 printf("\n");
	}
	else{
	printf("%s","Stack:");
	printf("\n");
  }  

}
