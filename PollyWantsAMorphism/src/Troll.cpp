#include "Troll.h"
#include <iostream>
Troll::Troll(string TrollName, string species) : Citizen(TrollName, species)
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
void Troll::Speak()
{
    cout << citizenName << " speaks: Get off my bridge!" << endl;
}
void Troll::Thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}