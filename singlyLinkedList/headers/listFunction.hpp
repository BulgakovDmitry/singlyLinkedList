#ifndef LIST_FUNCTION_HPP
#define LIST_FUNCTION_HPP

#include "listStruct.hpp"

void addItemToBegin(SingleLinkedList *list, const dataType item);
void addItemToEnd  (SingleLinkedList *list, const dataType item);
void addItemAfter  (SingleLinkedList* list, Node* pos, const dataType item);

void deleteItemAfter(SingleLinkedList* list, Node* node);

Node* findItem(SingleLinkedList list, const dataType item); 

#endif