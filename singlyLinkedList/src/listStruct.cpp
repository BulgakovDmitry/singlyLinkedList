#include "../headers/listStruct.hpp"
#include "../../myLib/myLib.hpp"

void listCtor(SingleLinkedList* list)
{
    ASSERT(list, "list = nullptr, it is impossible to work with nullptr", stderr);
    list->head = nullptr;
    list->tail = nullptr;
}

void listDtor(SingleLinkedList* list)
{
    ASSERT(list->head, "list->head = nullptr", stderr);
    ASSERT(list->tail, "list->tail = nullptr", stderr);

    Node* current = list->head;
    Node* next = nullptr;

    while (current)
    {
        next = current->next;
        FREE(current);
        current = next;
    }
}