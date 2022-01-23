#include <stdio.h>
#define MAXSIZE 3

struct Queue{
	int front;
	int back;
	int dataitems[MAXSIZE];
};

int isFull(struct Queue *q){
	if(q->back==MAXSIZE-1)
		return 1;
	else
		return 0;
}

int isEmpty(struct Queue *q){
	if(q->front==q->back==-1)
		return 1;
	else
		return 0;
}

void Display(struct Queue q){
	for(int i=q.front+1;i<=q.back;i++)
		printf("%d ",q.dataitems[i]);
}

void Enqueue(struct Queue *q,int x){
	if(isFull(q))
		printf("Queue Overflow");
	else{
		q->back++;
		q->dataitems[q->back] = x;
	}
}

void Dequeue(struct Queue *q){
	if(isEmpty(q))
		printf("Queue Underflow");
	else{
		q->front++;
	}
}

struct Queue CreateEmptyQueue(){
	struct Queue q;
	q.front = -1;
	q.back = -1;
	return q;
}

int main(){

	struct Queue myqueue;
	myqueue = CreateEmptyQueue();
	Enqueue(&myqueue,63);
	Enqueue(&myqueue,20);
	Enqueue(&myqueue,33);
	Display(myqueue);
	printf("\n");
	Dequeue(&myqueue);
	Display(myqueue);
	
	return 0;
}
