#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void print_list(struct node *p){

  printf("[");
  while(p->next != NULL){
    printf("%d, ", p->i);
    p = p -> next;
  }
  
  printf("%d]\n", p->i);
  
}

struct node * insert_front(struct node *p, int i){

  struct node *new = malloc (sizeof (struct node));

  new -> i = i;
  new -> next = p;
  
  return new;
  
}

struct node * free_list(struct node *p){

  struct node * returny = p;

  struct node * var;

  while (p -> next){

    var = p;
    p = var -> next;
    //printf("Freeing %d\n", var->i);
    free(var);
    
  }

  printf("Value of p: %d\n", p -> i);
  free(p);
  return returny;

}

int main(){

  struct node * y = malloc (sizeof (struct node));
  y -> i = 10;
  y -> next = NULL;

  print_list(y);

  y = insert_front(y, 20);

  y = insert_front(y, 30);
  y = insert_front(y, 40);

  print_list(y);
  
  free_list(y);

  print_list(y);
  
}
