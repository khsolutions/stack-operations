/*
 ============================================================================
 Name        : stack-operations.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 8
void push(int);
void pop();
void display();
void topelement();
int isempty();
int isfull();
int top=-1;
int stack[MAX];

int main(void)
{
	 push(100);
	 push(200);
	 push(300);
	 push(400);
	 push(500);
	 push(600);
	 push(700);
	 push(800);
	 display();
	 pop();
	 display();
	 topelement();
	return 0;
}

  int isfull()
  {
	  if(top == MAX-1)
	     return 1;
	  else
		   return 0;
   }
  int isempty()
  {
	  if(top == -1)
		  return 1;
	  else
		  return 0;
  }

   void push(int data)
   {
	   if(isfull())
	   {
		   printf("stack is full\n");
	   }
	   else
	   {
		   top++;
		   stack[top]=data;
	   }
   }

    void pop()
    {
    	if(isempty())
    	{
    		printf("stack is empty");
      	}
    	else
    	{
    		printf("\ndeleted element=%d\n",stack[top]);
    		--top;
    	}

    }

     void topelement()
     {
    	 if(isempty())
    	 {
    		 printf("stack is empty");
    	 }
    	 else
    	 {
    		 printf("\ntop element=%d",stack[top]);
    	 }
     }

     void display()
     {
    	 if(isempty())
    	 {
    		 printf("stack is empty");
    	 }
    	 else
    	 {
    		 int i;
    		 printf("\nstack elements are\n");

    		 for(i=0;i<=top;i++)
    		   printf("-->%d",stack[i]);
    	 }
       }
