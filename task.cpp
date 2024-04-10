#include "task.h"

Task::Task(const char *title, const char *description, statusEn status) : title{title}, description{description}, status{status} {}

const char *Task::getStatus()
{
    switch (status)
    {
    case 0:
        return "to do";
        break;
    case 1:
        return "during";
        break;
    case 2:
        return "done";
        break;
    default:
        return "";
    }
}

Task::~Task()
{
    if (title != nullptr)
        delete[] title;
    if (description != nullptr)
        delete[] description;
}