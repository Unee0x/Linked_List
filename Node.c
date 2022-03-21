#include "Node.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct node{

  void *data;
  struct node *link;

};

node_t Node(void *data)
{
  node_t tmp = NULL;
  static int sz = 0;
  tmp = calloc(1, sizeof(struct node));
  tmp->data = data;
  tmp->link = NULL;
  printf("New node @ address %p in position %d\n", tmp, sz++);
  return tmp;
}

void addNode(node_t head, void *data)
{

  node_t tmp = head;
  if( tmp == NULL ){
    tmp = Node(data);
  }else{
    while( tmp != NULL ){
      tmp = tmp->link;
  }
    tmp = Node(data);
  }
}

void rmList(node_t head)
{
  node_t n,tmp = head;
  if (tmp == NULL) {
    puts("List Empty\n");
  }else{
    while(tmp != NULL){
      n = tmp->link;
      printf("Freeing address %p\n", tmp);
      free(tmp);
      tmp = n;
    }
    printf("Finally freeing address %p\n",tmp);
    free(tmp);
  }
}
