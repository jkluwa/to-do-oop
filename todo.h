#pragma once
#include <iostream>
#include "task.h"

using namespace std;
class Todo
{
public:
    Todo();
    void append(Task *other);
    void del(char *title);
    void print();

private:
    Task **tasks;
    int size;
};