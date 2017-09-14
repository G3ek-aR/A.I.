#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  int id;
  char title[30];

}Node;

int main (){

int i=0;

Node node;

node.id = 1;
strcpy(node.title, "Inception");

printf ("\nID del nodo: %d\n", node.id);
printf ("Titulo del libro: %s\n", node.title);

return 0;
}
