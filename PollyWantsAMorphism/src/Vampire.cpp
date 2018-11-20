#include "Vampire.h"
#include <iostream>
Vampire::Vampire(string name, string species, string currency):Human(name,species,currency)
{
}

Vampire::~Vampire()
{
}
void Vampire::payTaxes(){
cout<<citizenName<<" has paid his taxes in "<<citizenCurrency<<endl;
}
void Vampire::Speak(){
cout<<citizenName<<" has spoken: I'm a spooky vampire. Be spooked. "<<endl;
}
