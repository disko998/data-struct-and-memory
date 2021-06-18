#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}
node;

int main(void) {
   node *list = NULL;

  for(int i = 0; i < 10; i++){
        node *n = malloc(sizeof(node));
        if(n == NULL) {
            free(n);
            return 1;
        }

        n->number = i;

        if(list == NULL) {
            n->next = NULL;
        } else {
            n->next = list;
        }

        list = n;
  }

   for(node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("list item: %i\n", tmp->number);
   }

  // free list from memory
   while(list != NULL) {
       node *tmp = list->next;
       free(list);
       list = tmp;
   }
}