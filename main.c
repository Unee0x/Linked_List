#include "Node.h"
#include <stdlib.h>
#include <time.h>

int main( void ){
  srand(time(NULL));

  int n = rand()%9+0;
  node_t head = Node(&n);

  
  for(int i=0;i < 10;i++){
    addNode(head, &n);
  }

  showList(head);
  insNode(head, &n, 3);
  showList(head);

  rmList(head);
  
  return 0;
}
