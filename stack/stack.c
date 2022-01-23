#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 3

struct stack{
	int *dataitems; 
	int top;
};

int isFull(struct stack *s){
	if(s->top==MAXSIZE-1)
		return 1;
	else
		return 0;
}

int isEmpty(struct stack *s){
	if(s->top==-1)
		return 1;
	else
		return 0;
}

void Display(struct stack *s)
{
	for(int i=s->top;i>-1;i--)
		printf("%d ",s->dataitems[i]);
}

struct stack * CreateEmptyStack(){
	struct stack *s;
	s = (struct stack *)malloc(sizeof(struct stack));
	s->top=-1;
	s->dataitems = (int *)malloc(MAXSIZE*sizeof(int));
	return s;
}

void push(struct stack *s,int x){
	if(isFull(s))
		printf("Stack is full\n");
	else{
		s->top++;
		s->dataitems[s->top] = x;
	}
}

void pop(struct stack *s){
	s->top--;
}

int main(){
	printf("Stack Implementation in C\n");
	struct stack *mystack ;
	mystack = CreateEmptyStack();
	push(mystack,100);
	push(mystack,10);
	push(mystack,13);
	pop(mystack);
	Display(mystack);
	return 0;
}
