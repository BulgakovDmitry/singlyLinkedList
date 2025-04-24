#include "../headers/listFunction.hpp"
#include "../myLib/myLib.hpp"
#include <stdlib.h>

void addItemToBegin(SingleLinkedList* list, dataType item)
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

void addItemToEnd(SingleLinkedList *list, dataType item)
{
    ASSERT(list, "list = nullptr", stderr);

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

Node* findItem(SingleLinkedList list, dataType item)
{
    Node* current = list.head;

    while (current)
    {
        if (current->data == item)
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