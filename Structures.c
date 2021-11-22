#include <stdio.h>

#define SIZE 100

// Global variables used for Stack
int stack[SIZE];
int top = -1;

// Global variables used for Queue
int queue[SIZE];
int front = 0;
int rear = -1;
int count = 0;

//Push procedure for Stack
void push(int item)
{

	if (top < SIZE-1) {
		top++;
		stack[top]=item;
	} 
	return;
}

//Pop procedure for Stack
int pop(void)
{
	
}

//Enqueue procedure for Queue
void enqueue(int item) 
{
	
}

//Dequeue procedure for Stack
int dequeue(void)
{
	int rv;  
	
	if (count == 0) {
		rv = -1;
	} else {
		rv = queue[front];
		front++;
		if (front == SIZE) {
			front = 0;
		}
		count--;
	}
	
	return rv;
}


int main(int argc, char *argv[]) {

	int i;

	for (i=0; i<10;  i++) {
		push(i);
	}

	printf("\ntop=%d\n",top);

	for (i=0;  i<10;  i++) {
		printf("Pop: %d\n",pop());
	}

	for (i=100;  i<110; i++) {
		enqueue(i);
	}

	printf("\nfront=%d  rear=%d\n",front,rear);

	for (i=0;  i<10;  i++) {
		printf("Dequeue: %d\n",dequeue());
	}

	return 0;
}	
