#include<stdio.h>
#include<stdlib.h>
int size,choice,f,top=-1,num,k,i,stack[6],rev[6];
void push();
void pop();
void display();
int pali();
void main()
{
printf("Enter the size for stack\n");
scanf("%d",&size);
printf("\n--MENU--\n1.Push 2.Pop 3.Display 4.Check for Palindrome 5.Exit\n");
while(1)
 {
	printf("Enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:push();
		       break;
		case 2:pop();
		       break;
		case 3:display();
		       break;
		case 4:f= pali ();
		if(f==1)
			printf("It is Palindrome\n");
		else
			printf("It is not a Palindrome\n");
		break;
		case 5:exit(0);
		default:printf("Wrong choice..\n");
	}
 }
}
void push()
{
	if(top==size-1)
	{
		printf("Stack is overflow\n");
	}
	else
	{
		printf("Enter the number to be pushed\n");
		scanf("%d",&num);
		top=top+1;
		stack[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is under flow\n");
	}
	else
	{
		num=stack[top];
		printf("Popped elements is %d\n",num);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("stack contents...\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int pali()
{
	int flag=1;
	for(i=top;i>=0;i--)
	{
		rev[k++]=stack[i];
	}
	for(i=top;i>=0;i--)
	{
		if(stack[i]!=rev[--k])
		{
			flag=0;
		}
	}
	return flag;
}
