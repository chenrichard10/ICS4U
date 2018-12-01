#include "Citizen.h"
#include <iostream>

Citizen::Citizen(string CitizenName, string Species)
{
    citizenName = CitizenName;
    citizenSpecies = Species;
    cout << "A " << citizenSpecies << " named " << citizenName << " has appeared." << endl;
}
Citizen::~Citizen()
{
    cout << citizenName << " has oofed." << endl;
}
//getName function to access citizen names
string Citizen::getName()
{
    return citizenName;
}
//getSpecies function to access species names
string Citizen::getSpecies()
{
    return citizenSpecies;
}
