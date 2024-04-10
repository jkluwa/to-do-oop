#include <iostream>
#include "option.h"
#include "todo.h"

class List : public Option
{
public:
    List(Todo *todo);
    void action();

private:
    Todo *todo;
};