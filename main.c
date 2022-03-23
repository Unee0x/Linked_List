#include "Node.h"
#include <stdlib.h>
#include <time.h>

int main( void ){
  srand(time(NULL));

  int n = rand()%9+0;
  node_t head = Node(&n);

  for(int i = 0; i < 25;i++){
    int r = rand()%9+0;
    addNode(head, &r);
  }

  rmList(head);
  
  return 0;
}
