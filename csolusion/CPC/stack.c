#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
struct stackNode {                                   
   int data;        
   struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);

int main(void)
{ 
   StackNodePtr stackPtr = NULL; 
   int value; 
   char choice[30]={0};
   while(~scanf("%s",choice))
   {
       int n = strlen(choice);
            if(n==3)
            {
                if(!isEmpty(stackPtr))
                {
                    printf("%d\n",pop(&stackPtr));
                }
            }
            else
            {
                for(int i = 0;choice[i]!='\0';i++)
                {
                    if(isdigit(choice[i]))
                    {
                        value = choice[i];
                        break;
                    }
                }
                push(&stackPtr, value);
            }
   }
    printStack(stackPtr);
} 
// insert a node at the stack top
void push(StackNodePtr *topPtr, int info)
{ 
   StackNodePtr newPtr = malloc(sizeof(StackNode));

   // insert the node at stack top
   if (newPtr != NULL) {           
      newPtr->data = info;           
      newPtr->nextPtr = *topPtr;     
      *topPtr = newPtr;                                  
   } 
} 

// remove a node from the stack top
int pop(StackNodePtr *topPtr)
{ 
   StackNodePtr tempPtr = *topPtr;             
   int popValue = (*topPtr)->data;  
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);               
   return popValue;
} 

// print the stack
void printStack(StackNodePtr currentPtr)
{ 
   // if stack is empty
   if (currentPtr == NULL) {
      puts("The stack is empty.\n");
   } 
   else { 
      // while not the end of the stack
      while (currentPtr != NULL) { 
         printf("%d\n", currentPtr->data);
         currentPtr = currentPtr->nextPtr;
      } 
   } 
} 

// return 1 if the stack is empty, 0 otherwise
int isEmpty(StackNodePtr topPtr)
{ 
   return topPtr == NULL;
} 