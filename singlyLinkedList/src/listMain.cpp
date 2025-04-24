#include "../headers/listStruct.hpp"
#include "../headers/listFunction.hpp"
#include "../headers/listDump.hpp"

int main(void)
{
    SingleLinkedList list = {};
    listCtor(&list);

    addItemToBegin(&list, 4);
    addItemToBegin(&list, 3);
    addItemToEnd(&list, 5);
    addItemAfter(&list, list.head, 10);

    Node* myNode = findItem(list, 4);
    addItemAfter(&list, myNode, 20);

    deleteItemAfter(&list, list.head);

    consoleDump(list);

    listDtor(&list);
    return 0;
}