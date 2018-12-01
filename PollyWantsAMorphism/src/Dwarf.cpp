#include "Dwarf.h"
#include <iostream>
Dwarf::Dwarf(string dwarfName, string species) : Citizen(dwarfName, species)
{
}

Dwarf::~Dwarf()
{
}
void Dwarf::payTaxes()
{
    cout << citizenName << " has paid his/her taxes in gold." << endl;
}
void Dwarf::Speak()
{
    cout << citizenName << " speaks:I am very small." << endl;
}
void Dwarf::Thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
