#include "form.h"

Form::Form(Todo *todo, const char *name, std::initializer_list<const char *> args) : todo{todo}, argsNames{new const char *[args.size()]}, Option(name)
{
    argsSize = args.size();
    this->args = new char *[argsSize];
    size_t i = 0;
    for (const char *v : args)
    {
        argsNames[i] = v;
        this->args[i] = (char *)malloc(sizeof(char *) * 25);
        i++;
    }
}

void Form::print()
{
    cout << name << " form" << '\n';
    for (int i = 0; i < argsSize; i++)
    {

        cout << "type " << argsNames[i] << ": " << '\n';
        cin.getline(args[i], 250);
    }
}