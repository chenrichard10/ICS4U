#include "Troll.h"
#include <iostream>
Troll::Troll(string name, string species) : Citizen(name, species)
{
}

Troll::~Troll()
{
}

void Troll::payTaxes()
{
    // now outputs variables from Citizen.cpp
    cout << citizenName << " has paid his/her taxes in gems" << endl;
}
void Troll::speak()
{
    cout << citizenName << " speaks: Get off my bridge!" << endl;
}
void Troll::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
