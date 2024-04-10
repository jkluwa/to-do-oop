#include "list.h"

List::List(Todo *todo) : todo{todo}, Option("list") {}

void List::action()
{
    todo->print();
}