#ifndef LIST_FUNCTION_HPP
#define LIST_FUNCTION_HPP

#include "listStruct.hpp"

void addItemToBegin(SingleLinkedList *list, int item);
void addItemToEnd  (SingleLinkedList *list, int item);
void addItemAfter  (SingleLinkedList* list, Node* pos, int item);

void deleteItemAfter(SingleLinkedList* list, Node* node);

Node* findItem(SingleLinkedList list, int item); 

#endif