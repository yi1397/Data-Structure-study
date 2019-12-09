#include<stdio.h>
#define SIZE 8
char data[SIZE];
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
			printf("%c\t",data[i]);
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
			printf("%c\t",data[i]);
		}
		for(int i=rear;i<front;i++)
		{
			printf("[]\t");
		}
		for(int i=front+1;i<SIZE;i++)
		{
			printf("%c\t",data[i]);
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
	char input;
	while(true)
	{
		scanf(" %c",&input);
		if(input == '0') pop();
		else if(input == '9') return printf("종료\n");
		else push(input);
	}
	return 0;
}
