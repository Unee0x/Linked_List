#ifndef __NODE_H
#define __NODE_H

typedef struct node *node_t;

node_t Node(void *);
void addNode(node_t, void *);
void insNode(node_t, void*, int);
void showList(node_t);
void rmList(node_t);

#endif
