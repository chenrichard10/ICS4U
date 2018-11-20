#include "Troll.h"
#include <iostream>
Troll::Troll(string TrollName,string species,string currency):Citizen(TrollName,species,currency)
{
cout<<citizenName <<" has been created. It is a "<<citizenSpecies<<endl;
}

Troll::~Troll()
{
cout<<citizenName<<" has died" <<endl;
}

void Troll::payTaxes(){
    // now outputs variables from Citizen.cpp
    cout<<citizenName<<" has paid his/her taxes in "<<citizenCurrency<<endl;
}
void Troll::Speak(){
cout<<citizenName<< " says Hi"<< endl;
}
