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
    char s[9]={0};
    int num;
    while(scanf("%s",s)!=EOF)
    {           
       if(strcmp(s,"push")==0)
       {
           scanf("%d",&num);
           push(&stackPtr, num);           
       }
       else
       {
           if(!isEmpty(stackPtr)) 
            {
                int tmp = pop(&stackPtr);
                printf("%d\n",tmp);
            }
            else
            {
                printf("The stack is empty.\n");
            }
       }
    }
    return 0;
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