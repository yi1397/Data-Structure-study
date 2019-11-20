#include<stdio.h>
#define SIZE 4
int data[SIZE];
int front = 0;
int rear = 0;

void print_data()
{
	if(front<=rear)
	{
		for(int i=0;i<=front;i++)
		{
			printf("[]\t");
		}
		for(int i=front+1;i<=rear;i++)
		{
			printf("%d\t",data[i]);
		}
		for(int i=rear+1;i<SIZE;i++)
		{
			printf("[]\t");
		}
	}
	else
	{	
		for(int i=0;i<=rear;i++)
		{
			printf("%+d\t",data[i]);
		}
		for(int i=rear;i<front;i++)
		{
			printf("[]\t");
		}
		for(int i=front+1;i<SIZE;i++)
		{
			printf("%d\t",data[i]);
		}
		
	}
	printf("\n");
}
 
int push(int value)
{
	if((rear+1)%SIZE == front) return printf("포화");
	rear++;
	rear%=SIZE;
	data[rear] = value;
	print_data();
	return 0;
}

int pop()
{
	if(front==rear) return printf("공백");
	front++;
	front%=SIZE;
	print_data();
	return data[front];
}

int main()
{
	push(4);
	push(8);
	push(-1);
	pop();
	pop();
	push(7);
	push(9);
	push(10);
	return 0;
}
