#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include "funcs2.h"
#define COUNT 40


int main(){
	typedef struct node{
		uint64_t data;
		struct node* next;
	} node_t;

	time_t t;

	srand((unsigned)time(&t));

	node_t* head = NULL;
	node_t* biggestElement = NULL;
	
	for (int i = 0; i < COUNT; i++){
		uint64_t number = (uint64_t)rand() % UINT64_MAX;
		push(&head, number);
	}


	biggestElement = maxElement(head);
	printList(head);
	printf("Biggest element : %llu\n", biggestElement->data);
	printf("Setted elements = %llu", setedBitsSum(head));
	listFree(head);
	return 0;
}