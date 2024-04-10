#include "menu.h"

Menu::Menu() : todo{new Todo}, OPTS_SIZE{3}
{
    options = new Option *[OPTS_SIZE];
    options[0] = new AddForm(todo);
    options[1] = new DeleteForm(todo);
    options[2] = new List(todo);
}

void Menu::mainMenu()
{
    char n[10];
    while (1)
    {
        cout << '\n'
             << '\n'
             << "THIS IS MENU" << '\n';
        for (int i = 0; i < OPTS_SIZE; i++)
        {
            cout << i << ": " << options[i]->getName() << '\n';
        }
        cin.getline(n, 10);
        options[atoi(n)]->action();
    }
}

Menu::~Menu()
{
    if (options != nullptr)
        delete[] options;
}
