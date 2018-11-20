#include "Dwarf.h"
#include <iostream>
Dwarf::Dwarf(string dwarfName, string species, string currency):Citizen(dwarfName,species,currency)
{
    cout<<citizenName <<" has been created. It is a "<<citizenSpecies<<endl;
}

Dwarf::~Dwarf()
{
    cout<<citizenName<<" has died" <<endl;
}
void Dwarf::payTaxes(){
    // now outputs variables from Citizen.cpp
    cout<<citizenName<<" has paid his/her taxes in "<<citizenCurrency<<endl;
}
void Dwarf::Speak(){
cout<<citizenName<< " says Hi"<< endl;
}
