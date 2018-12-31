#include "Werewolf.h"
#include <iostream>

Werewolf::Werewolf(string name, string species) : Human(name, species), Wolf(name, species)
{
}

Werewolf::~Werewolf()
{
}
void Werewolf::payTaxes()
{
    //curent errrors
    cout << citizenName << " has paid his taxes" << endl;
}
void Werewolf::speak()
{
    cout << citizenName << " begins to to speak: I've acquired the bad qualities of both species..." << endl;
}

void Werewolf::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
