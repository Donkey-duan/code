#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct stackNode 
{                                   
   int data; // define data as an int             
   struct stackNode *nextPtr; // stackNode pointer
};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr; 
void push(StackNodePtr *topPtr, int info);
int isEmpty(StackNodePtr topPtr);
int pop(StackNodePtr *topPtr);
int number(char b[],int);

int main()
{
   StackNodePtr stackPtr = NULL;
   int del[30]={0},i=0,j;
   while(1)
   {
       char s[9]={0};
       gets(s);
       int n = strlen(s);
       int num = number(s,n);
       if(num != -1)
       {
           push(&stackPtr, num);           
       }
       else
       {
           if(!isEmpty(stackPtr)) 
            {
                del[i] = pop(&stackPtr);
                i++;
            }
            else
            {
                break;
            }
       }
   }
   for(j = 0;j<i;j++)
   {
       printf("%d\n",del[j]);
   }
   printf("The stack is empty.\n");
    return 0;
}

int number(char b[],int N)
{
    int i=0,m=0,num=0;
    if(N==3)
    {
        return -1;
    }
    else
    {
        N-=5;
        while(N)
        {
            m++;
            N--;
        }
        i=5;
        while(m)
        {
            num += (b[i]-48)*pow(10,m-1);
            m--;
            i++;
        }
        return num;
    }
}

void push(StackNodePtr *topPtr, int info)
{ 
   StackNodePtr newPtr = malloc(sizeof(StackNode));  
    newPtr->data = info;           
    newPtr->nextPtr = *topPtr;     
    *topPtr = newPtr;                         
} 

int pop(StackNodePtr *topPtr)
{ 
   StackNodePtr tempPtr = *topPtr;             
   int popValue = (*topPtr)->data;  
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);               
   return popValue;
} 

int isEmpty(StackNodePtr topPtr)
{ 
   return topPtr == NULL;
} 