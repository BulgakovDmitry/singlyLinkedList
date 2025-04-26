#include "../headers/listStruct.hpp"
#include "../headers/listFunction.hpp"
#include "../headers/listDump.hpp"

int main(void)
{
    SingleLinkedList list = {};
    listCtor(&list);

    addItemToBegin(&list, "world");
    addItemToBegin(&list, "hello");
    addItemToEnd(&list, "vsem");
    //addItemAfter(&list, list.head, 10);

    Node* myNode = findItem(list, "world");
    addItemAfter(&list, myNode, "privet!");

    //deleteItemAfter(&list, list.head);

    consoleDump(list);

    listDtor(&list);
    return 0;
}