#pragma once
#include <iostream>

class Option
{
public:
    Option(const char *name);
    ~Option();
    virtual void action() = 0;
    const char *getName() { return name; }

protected:
    const char *name;
};