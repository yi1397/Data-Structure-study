#include<stdio.h>
int stack[10];
int top = -1;
int print_stack()
{
	for(int i=0;i<=top;i++) printf("%d ", stack[i]);
	printf("\n");
	return 0;
}
int push(int value)
{
	if(top==9) return printf("out_index");
	top++;
	stack[top] = value;
	return print_stack();
}
int pop()
{
	if(top==0) return printf("out_index");
	print_stack();
	return stack[top--];
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
