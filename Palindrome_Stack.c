#include<stdio.h>
#define MAX 50
struct stack
{
	char a[MAX];
	int top;
}s1;

void init()
{
	s1.top=-1;
}
int isempty()
{
	if(s1.top==-1)
	  return 1;
	else
	  return 0;
}
int isfull()
{
	if(s1.top==MAX-1)
	  return 1;
	else
	  return 0;
}

void push(char ch)
{
	if(isfull())
	{
		printf("\nStack is full");
	}
	else
	{
		s1.top++;
		s1.a[s1.top]=ch;
	}
}
char pop()
{
	char val;
	if(isempty())
	{
		printf("\nStac is empty");
	}
	else
	{
		val=s1.a[s1.top];
		s1.top--;
	}
	return val;
}
void main()
{
    char str[50];
    int i, flag=1;



    printf("Enter string : ");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        push(str[i]);
    }

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] != pop())
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
