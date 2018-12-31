#include "Dwarf.h"
#include <iostream>
Dwarf::Dwarf(string name, string species) : Citizen(name, species)
{
}

Dwarf::~Dwarf()
{
}
void Dwarf::payTaxes()
{
    cout << citizenName << " has paid his/her taxes in gold." << endl;
}
void Dwarf::speak()
{
    cout << citizenName << " speaks:I am very small." << endl;
}
void Dwarf::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
