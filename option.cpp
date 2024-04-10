#include "option.h"

Option::Option(const char *name) : name{name}
{
}
Option::~Option()
{
    if (name != nullptr)
        delete[] name;
}