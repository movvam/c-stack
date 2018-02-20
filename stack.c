#include <stdio.h>

int stack[10]; 
int *stackPointer;

int push(int value){
	stackPointer = stackPointer + 1;
	if(stackPointer >= &stack[0] + 10){
		return 1;
	}
	*stackPointer = value;
	return 0;
}

int pop(int *value){
	if(stackPointer >= stack){
		*value = *stackPointer;
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
	    	else{ 
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
