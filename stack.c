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