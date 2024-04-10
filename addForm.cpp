#include "string.h"
#include "addForm.h"

AddForm::AddForm(Todo *todo) : Form(todo, "Add", {"title", "description", "status"}) {}

void AddForm::action()
{

    Form::print();
    try
    {
        char *title = (char *)malloc(sizeof(char) * 25);
        strcpy(title, Form::args[0]);
        if (!title)
            throw("Title is empty");
        char *description = (char *)malloc(sizeof(char) * 250);
        strcpy(description, Form::args[1]);
        statusEn status;
        if (strcmp(Form::args[2], "to do") == 0)
            status = statusEn::toDo;
        else if (strcmp(Form::args[2], "during") == 0)
            status = statusEn::during;
        else if (strcmp(Form::args[2], "done") == 0)
            status = statusEn::done;
        else
            throw("wrong status");
        todo->append(new Task(title, description, status));
    }
    catch (const char *err)
    {
        cout << err << endl;
    }
}
