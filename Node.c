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

  node_t tmp = NULL;

  if( head == NULL ){
    head = Node(data);
    printf("Head Node @ %p\n",head);
    assert(head != NULL);
  }else{
    tmp = head;
    while( tmp->link != NULL ){
      //tmp = tmp->link;
      fprintf(stdout,"Skipped address %p\n", tmp);
      tmp = tmp->link;
  }
    tmp->link = Node(data);
  }
}

void rmList(node_t head)
{
  node_t n = NULL;
  node_t tmp = head;
  printf("Head's address is %p\n", tmp);
  if (tmp == NULL) {
    puts("List Empty\n");
    exit(-1);
  }else{
    static int i = 0;
    while(tmp != NULL){
      n = tmp->link;
      printf("Freeing address %p at position %d\n", tmp, i++);
      free(tmp);
      tmp = n;
    }
  }
}
