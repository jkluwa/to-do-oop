#pragma once
#include <iostream>

enum statusEn
{
    toDo = 0,
    during = 1,
    done = 2
};

inline std::istream &operator>>(std::istream &is, statusEn &status)
{
    int a;
    is >> a;
    status = static_cast<statusEn>(a);
    return is;
}

class Task
{
public:
    Task(const char *title, const char *description, statusEn status);
    ~Task();
    const char *getTitle() { return title; }
    const char *getDescription() { return description; }
    const char *getStatus();

private:
    const char *title;
    const char *description;
    statusEn status;
};