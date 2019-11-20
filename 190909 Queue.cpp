#include<stdio.h>
int stack[100];
int front = 0;
int rear = -1;
int print_stack()
{
	for(int i=0;i<front;i++) printf("   ");
	for(int i=front;i<=rear;i++) printf("%+d ", stack[i]);
	printf("\n");
	return 0;
}
int push(int value)
{
	if(rear == 99) return printf("out\n");
	rear++;
	stack[rear] = value;
	printf("push:");
	return print_stack();
}
int pop()
{
	if(front==rear) return printf("out\n");
	front++;
	printf("pop: ");
	print_stack();
	return stack[front];
}
int main()
{
	push(5);
	push(3);
	push(-1);
	push(0);
	pop();
	pop();
	push(0);
	push(0);
	pop();
	pop();
	pop();
	push(8);
	push(11);
	push(0);
	push(-1);
	pop();
	push(9);
	return 0;
}
