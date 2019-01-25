#include<stdio.h>
#include<conio.h>
#define max 5
#include<stdlib.h>
int top=-1;
int stack[max];
int n;



void push()
{ int m;

	if(top==max-1){
		printf("stack is underflow");
	}
	else{
		top++;
		printf("enter the element in the stack : ");
		scanf("%d",&m);
		stack[top]=m;
	}
	
}
void pop()
{int ele;
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else{
		ele=stack[top];
		top--;
		printf("deleted element is %d\n",ele);
	}
}
void display()
{int i;
if(top==-1)
{
	printf("there is no element to print\n");
}
for(i=0;i<=top;i++)
{
	printf("%d\n",stack[i]);
}
}
void peep()
{
	printf("the last element is %d\n",stack[top]);
}
void main()
{int ch;
while(1)
{
	printf("1. push \n");
	printf("2. pop\n");
	printf("3. display\n");
	printf("5. peep\n");
	printf("4. exit\n");
	printf("enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :
			push();
			break;
			case 2:
				pop();
				break;
				case 3 :
					display();
					break;
					case 4:
						exit(0);
						break;
						case 5:
							peep();
							break;
				default :
					printf("enter valid choice\n");
					break;
	}
}

}
