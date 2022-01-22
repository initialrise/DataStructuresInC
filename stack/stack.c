#include <stdio.h>
#define MAXITEM 3

struct stack{
	int dataitems[MAXITEM];
	int top;
};

int isFull(struct stack *s){
	if(s->top==MAXITEM-1)
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

void Display(struct stack s)
{
	for(int i=s.top;i>-1;i--)
		printf("%d ",s.dataitems[i]);
}

struct stack CreateEmptyStack(){
	struct stack s;
	s.top=-1;
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

int main(){
	printf("Stack Implementation in C\n");
	struct stack mystack = CreateEmptyStack();
	push(&mystack,100);
	push(&mystack,10);
	push(&mystack,13);
	push(&mystack,43);
	Display(mystack);
	return 0;
}
