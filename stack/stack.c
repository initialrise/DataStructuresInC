#include <stdio.h>
#define MAXITEM 30
struct stack{
	int dataitems[MAXITEM];
	int top;
};

void isFull(struct stack *s){
	if(s->top==MAXITEM)
		return 1;
	else
		return 0;
}

int main(){
	printf("Hello World");
	return 0;
}
