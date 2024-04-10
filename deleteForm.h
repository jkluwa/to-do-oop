#pragma once
#include <iostream>
#include "form.h"

class DeleteForm : public Form
{
public:
    DeleteForm(Todo *todo);
    void action();
};