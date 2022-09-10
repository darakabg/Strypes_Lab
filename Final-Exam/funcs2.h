#include <stdint.h>
#include <stdlib.h>
#include "funcs2.c"

void push(node_t** head, uint64_t value);
void listFree(node_t** list);
void printList(node_t* head);
node_t* maxElement(node_t* head);
uint64_t setedBits(node_t* head);