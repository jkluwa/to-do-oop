#include "deleteForm.h"

DeleteForm::DeleteForm(Todo *todo) : Form(todo, "Delete", {"title"}) {}

void DeleteForm::action()
{
    todo->print();
    Form::print();
    char *title = Form::args[0];
    todo->del(title);
}