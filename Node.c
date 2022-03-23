#include "Node.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct node{

  void *data;
  int pos;
  struct node *link;

};

node_t Node(void *data)
{
  node_t tmp = NULL;
  static int sz = 0;
  tmp = calloc(1, sizeof(struct node));
  tmp->data = data;
  tmp->pos = sz; 
  tmp->link = NULL;
  printf("New node @ address %p in position %d\n", tmp, sz++);
  return tmp;
}

void insNode(node_t head, void *data, int pos)
{
  node_t cp, tmp = NULL;
  tmp = head;
  
  while( tmp->link != NULL ){
    if( tmp->pos == (pos - 1)){
      cp = tmp;
    }
    tmp = tmp->link;
  }
  
  
}

void addNode(node_t head, void *data)
{

  node_t tmp = NULL;
  
    tmp = head;
    while( tmp->link != NULL ){
      fprintf(stdout,"Skipped address %p\n", tmp);
      tmp = tmp->link;
  }
    tmp->link = Node(data);
}

void rmList(node_t head)
{
  node_t n = NULL;
  node_t tmp = head;
  
  if (tmp == NULL)
    exit(-1);
  else{
    static int i = 0;
    while(tmp != NULL){
      n = tmp->link;
      printf("Freeing address %p at position %d\n", tmp, i++);
      free(tmp);
      tmp = n;
    }
  }
}
