#include "list.h"

int main(){
   struct node *list = NULL;
   list = list_add(list, 1);
   list = list_add(list, 1);
   list = list_add(list, 3);
   list = list_add(list, 4);
   list_dump(list);
   list_free(list);
}