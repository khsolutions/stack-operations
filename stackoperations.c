#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push();
int  peakelement();
void traverse();
void popelements();
int isfull();
int isempty();
int top=-1;
int stack[CAPACITY];
int main()
{

  
  int ch,element;
  while(1)
  {
  printf("stack opearions\n");
  printf("1.push elements\n");
  printf("2.peak method\n");
  printf("3.traverse\n");
  printf("4.pop elements\n");
  printf("5.exit\n");
  printf("enter your choice\n");
  scanf("%d",&ch);
  
  switch(ch)
    {
    
     case 1: push();
             break;
     case 2: element=peakelement();
             printf("%d\n",element);
             break;
     case 3: traverse();
             break;
     case 4: popelements();
             break;
     case 5: exit(1);
   default : printf("invalid choice\n");
             break;
    }

  }
  return 0;
}


   /*logic to push elements into the stack*/

   void push()
   {
      int ele;
     printf("enter the element tp pushon to the stack\n");
     scanf("%d",&ele);

     if(isfull())
     {
        printf("stack is empty\n");
     }
     else 
        {

        top++;
        stack[top]=ele;
        printf("element pushed %d \n",ele);

        }
     }

      /* stack full or not logic */

	int  isfull()
	{
	   if(top==CAPACITY-1)
	   return 1;

	   else 
	   return 0;

	}

	
	/* pop elements logic*/

        void popelements()
        {
         
          int ele;

	printf("enter the element to pop\n");
	scanf("%d",&ele);

	if(isempty())
	{

	 printf("no element in stack to pop\n");
           
	 }

	else 
      
         {
            ele=stack[top];
	  top--;
         }
         
       }	 

    

       
        
       /* logic to check stack */

       int isempty()
       {
         
          if(top==-1)
	{
	  return 1;
	}
	else
	{
	  return 0;
	}
       }
         
       

       /* logic to print top element in stack */


     int peakelement()
     {

       if(isempty())
       {
           return 0;
       }
       else
       {
          return stack[top];
       }
 
    }
      
      /* logic to print all stack elements */


      void traverse()
      {

      int i;

      if(isempty())
      {
        printf("no element in stack\n");

      }
      else 
      {

        printf("stack elements are:\n");

        for(i=0;i<=top;i++)
        {
        printf("%d\n",stack[i]);
        }
      }
  }

          


	  


