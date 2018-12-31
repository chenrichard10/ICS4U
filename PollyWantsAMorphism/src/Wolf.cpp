#include "Wolf.h"
#include "Citizen.h"
#include <iostream>
Wolf::Wolf(string name, string species)
{
    wolfSpecies = species;
    wolfName = name;
    if (species != "Werewolf")
    {
        cout << "A Wolf named " << wolfName << " has appeared." << endl;
    }
}
Wolf::~Wolf()
{
    if (wolfSpecies == "Wolf")
    {
        cout << wolfName << " has died." << endl;
    }
}
void Wolf::growl()
{
    cout << wolfName << "'s mouth is trying to say something: GRRRRRRRRRRRRRR" << endl;
}
void Wolf::howl()
{
    cout << wolfName << "'s mouth is trying to say something: AWOOOOOOOOOOOO" << endl;
}
