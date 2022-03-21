#ifndef __NODE_H
#define __NODE_H

typedef struct node *node_t;

node_t Node(void *);
void addNode(node_t, void *);
void rmList(node_t);

#endif
