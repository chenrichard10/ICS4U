#include "Wolf.h"
#include "Citizen.h"
#include <iostream>
Wolf::Wolf(string name, string species)
{
    Species = species;
    Name = name;
    if (species != "Werewolf")
    {
        cout << "A wolf named " << Name << " has appeared." << endl;
    }
}

Wolf::~Wolf()
{
    if (Species == "Wolf")
    {
        cout << Name << " has died." << endl;
    }
}
