#include <stdio.h>
#define MAXITEM 30

struct stack{
	int dataitems[MAXITEM];
	int top;
};

int isFull(struct stack *s){
	if(s->top==MAXITEM)
		return 1;
	else
		return 0;
}

int isEmpty(struct stack *s){
	if(s->==-1)
		return 1;
	else
		return 0;
}

void Display(struct stack s)
{
	for(int i=top;i>-1;i--)
		printf("%d ",i);
}


int main(){
	printf("Hello World");
	return 0;
}
