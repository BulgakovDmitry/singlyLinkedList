#ifndef LIST_STRUCT_HPP
#define LIST_STRUCT_HPP

typedef int dataType;

struct Node
{
    Node *next;
    dataType data;
};

struct SingleLinkedList
{
  Node *head;
  Node *tail;
};

void listCtor(SingleLinkedList* list);
void listDtor(SingleLinkedList* list);

#endif