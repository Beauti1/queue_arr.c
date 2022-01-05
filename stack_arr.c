#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack1 [MAX];

push()
{
	int pushed_item;
	if(top==(MAX-1))
	{ 	
		printf("Stack Overflow.\n");
	}
	else
	{
		printf("Enter the item to be pushed in stack:");
		scanf("%d",&pushed_item);
		top=top+1;
		stack1[top]=pushed_item;
	}
}

pop()
{
	if(top==-1)
	{
		printf("Stack underflow.\n");
	}
	else
	{
		printf("Popped element is:%d",stack1[top]);
		top=top-1;
	}
}


display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Stack elements:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack1[i]);
		}
	}
}
		



main()
{
	int choice;
	while(1)
	{
		printf("1.Push \n");
		printf("2.Pop \n");
		printf("3.Display \n");
		printf("4.Quit \n");
		printf("Enter your choice:");
		scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                push();
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(1);
                                break;
                         default:
                                printf("Please enter a valid choice");
                }
      }
}

