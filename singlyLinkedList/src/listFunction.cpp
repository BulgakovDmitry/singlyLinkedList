#include "../headers/listFunction.hpp"
#include "../../myLib/myLib.hpp"
#include <stdlib.h>

void addItemToBegin(SingleLinkedList* list, const dataType item)
{
    ASSERT(list, "list = nullptr", stderr);

    Node *newNode = (Node*)calloc(1, sizeof(Node));
    ASSERT(newNode, "newNode = nullptr", stderr);

    newNode->data = item;
    newNode->next = list->head;
    list->head = newNode;

    if (list->tail == nullptr)
        list->tail = newNode;
}

void addItemToEnd(SingleLinkedList *list, const dataType item)
{
    ASSERT(list, "list = nullptr", stderr );

    if (list->tail == nullptr)
        return addItemToBegin(list, item);

    Node *newNode = (Node*)calloc(1, sizeof(Node));
    ASSERT(newNode, "newNode = nullptr", stderr);

    newNode->data = item;
    newNode->next = nullptr;
    list->tail->next = newNode;
    list->tail = newNode;
}

void addItemAfter(SingleLinkedList* list, Node* pos, dataType item)
{
    ASSERT(list, "list = nullptr", stderr);

    if (pos == NULL) 
        return addItemToEnd(list, item);

    Node *newNode = (Node*)calloc(1, sizeof(Node));
    ASSERT(newNode, "newNode = nullptr", stderr);

    newNode->data = item;
    newNode->next = pos->next;
    pos->next = newNode;
}

Node* findItem(SingleLinkedList list, const dataType item)
{
    Node* current = list.head;

    while (current)
    {
        if (strcmp(current->data, item) == 0)
            return current;
        current = current->next;
    }

    return nullptr;
}

void deleteItemAfter(SingleLinkedList* list, Node* node)
{
    ASSERT(list, "list = nullptr", stderr);
    ASSERT(node, "node = nullptr", stderr);

    if (!node)
    {
        list->head = list->head->next;
        FREE(list->head);
    }

    ASSERT(node->next, "node->next = nullptr", stderr);
    
    Node* nodeToDelete = node->next;
    node->next = node->next->next;

    FREE(nodeToDelete);
}