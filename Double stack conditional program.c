/*
	IGNOU EXAM base impotant question !!!
	____________________________________________________________________________________________________________________________	
	
	qns.   wirter a program to impliment if stack such that it calls a function push(s,x) ,where as 's'	is stack value and 'x'		(10 Marks)
		   is an element to push if s=1 ,then push the element of left side and if s=2 then push the element to the right side.
		   similiraly is calls pop  of 's' and list of s.  [10 Marks]
	____________________________________________________________________________________________________________________________
	
*/
#include<stdlib.h>
int a[10],top=-1,etop=10,s,x;
main()
{
	int d;
	while(1)
	{
		puts("Main Stack Menu");
		puts("Press 1 for Push");
		puts("Press 2 for Pop");
		puts("Press 3 for list");
		puts("Press 4 for exit");
		puts("Enter Your choice");
		scanf("%d",&d);
		switch(d)
		{
			case 1: puts("Enter the Stack value and element");
					scanf("%d%d",&s,&x);
					push(s,x);
					break;
			case 2: puts("Enter the stack value");
					scanf("%d",&s);
					pop(s);
					break;
			case 3: puts("Enter the stack value");
					scanf("%d",&s);
					list(s);
					break;
			case 4: exit(0);
			default: puts("Invalid input! Please valid choice");						
		}
	}
	getch();
}

push(s,x)
{
		if(s==1)
		{
			top++;
			if(top==etop)
			{
				puts("Stack is overflow Left side");
				top--;
			}
			else
			{
				a[top]=x;
			}
		}
		
		else if(s==2)
		{
			etop--;
			if(etop==top)
			{
				puts("Stack is overflow right side");
				etop++;
			}
			else
			{
				a[etop]=x;
			}
		}
}

pop(s)
{
	if(s==1)
	{
		if(top==-1)
		{
			puts("Stack is underflow form left side");
			top++;
		}
		else
		{
			printf("\n%d is popped from left side",a[top]);
			a[top]=0;
			top--;
	}
}
	
	else if(s==2)
	{
		if(etop==10)
		{
			puts("Stack is underflow from left side");
			etop--;
		}
		else
		{
			printf("\n%d is popped from right side");
			a[etop]=0;
			etop++;
		}
	}
}

list(s)
{
	if(s==1)
	{
		int i;
		puts("\nElements of stack of left side");
		for(i=0;i<=top;i++)
		{
			printf("\n%d",a[i]);
		}
	}
		else if(s==2)
	   {
		int i;
		puts("\nElements of stack of left side");
		for(i=9;i>=etop;i--)
		{
			printf("\n%d",a[i]);
		}
		}
}

