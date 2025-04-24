#include "../headers/listDump.hpp"
#include "../myLib/myLib.hpp"

#include <stdio.h>

void consoleDump(SingleLinkedList list)
{
    Node *current = list.head;
    fputs(RED "_____CONSOLE_DUMP_____________________________________________________________________________________\n" RESET, stdout);
    fputs(CEAN "[ " RESET, stdout);

    while (current)
    {
        printf(GREEN "%d " GREEN, current->data);
        current = current->next;
    }

    fputs(CEAN "]\n" RESET, stdout);
    fputs(RED "______________________________________________________________________________________________________\n" RESET, stdout);
}
