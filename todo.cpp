#include "todo.h"
#include "string.h"

Todo::Todo() : size{0}, tasks{nullptr}
{
}

void Todo::append(Task *other)
{
    Task **tempTasks = new Task *[size + 1];
    for (int i = 0; i < size; i++)
    {
        tempTasks[i] = tasks[i];
    }
    tempTasks[size] = other;
    size++;
    if (tasks != nullptr)
        delete[] tasks;
    tasks = tempTasks;
}

void Todo::del(char *title)
{
    Task **tempTasks = new Task *[size - 1];
    for (int i = 0; i < size; i++)
    {
        if (strcmp(title, tasks[i]->getTitle()) == 0)
        {
            i--;
            size--;
            continue;
        }
        tempTasks[i] = tasks[i];
    }
    if (tasks != nullptr)
        delete[] tasks;
    tasks = tempTasks;
}

void Todo::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << "title: " << tasks[i]->getTitle() << '\n'
             << "description: " << tasks[i]->getDescription() << '\n'
             << "status: " << tasks[i]->getStatus() << '\n'
             << '\n';
    }
}