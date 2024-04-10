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
    try
    {
        int size_ = size;
        Task **tempTasks = new Task *[size - 1];
        for (int i = 0; i < size_; i++)
        {
            if (strcmp(title, tasks[i]->getTitle()) == 0)
            {
                size--;
                continue;
            }
            tempTasks[i + size - size_] = tasks[i];
        }

        if (size == size_)
            throw("no task with this title");
        if (tasks != nullptr)
            delete[] tasks;
        tasks = tempTasks;
    }
    catch (const char *err)
    {
        cout << err << '\n';
    }
}

void Todo::print()
{
    cout << '\n'
         << "TO DO:" << '\n';
    for (int i = 0; i < size; i++)
    {
        cout << "title: " << tasks[i]->getTitle() << '\n'
             << "description: " << tasks[i]->getDescription() << '\n'
             << "status: " << tasks[i]->getStatus() << '\n'
             << '\n';
    }
}

Todo::~Todo()
{
    if (tasks != nullptr)
    {
        delete[] tasks;
    }
}