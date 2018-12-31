#include "Vampire.h"
#include <iostream>
Vampire::Vampire(string name, string species) : Human(name, species)
{
}

Vampire::~Vampire()
{
}
void Vampire::payTaxes()
{
    cout << citizenName << " has paid his taxes in dollars" << endl;
}
void Vampire::speak()
{
    cout << citizenName << " has spoken: I'm a spooky vampire. Be spooked. " << endl;
}
void Vampire::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
