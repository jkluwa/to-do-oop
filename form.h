#pragma once
#include <iostream>
#include <initializer_list>
#include "todo.h"
#include "option.h"
using namespace std;

class Form : public Option
{
public:
    Form(Todo *todo, const char *name, std::initializer_list<const char *> args);
    ~Form();
    void print();
    char **getArgs() { return args; };

protected:
    char **args;
    int argsSize;
    Todo *todo;

private:
    const char **argsNames;
};