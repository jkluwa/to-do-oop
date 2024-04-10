#include <iostream>
#include "form.h"
#include "task.h"
class AddForm : public Form
{
public:
    AddForm(Todo *todo);
    void action();
};
