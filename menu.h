#pragma once
#include <iostream>
#include "todo.h"
#include "option.h"
#include "form.h"
#include "list.h"
#include "addForm.h"
#include "deleteForm.h"

const int TITLE_SIZE = 25;
const int DESCRIPTION_SIZE = 250;

class Menu
{
public:
    Menu();
    void mainMenu();

private:
    Todo *todo;
    Option **options;
    const int OPTS_SIZE;
};