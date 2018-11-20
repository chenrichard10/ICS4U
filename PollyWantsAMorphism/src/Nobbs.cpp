#include "Nobbs.h"
#include <iostream>
Nobbs::Nobbs(string name, string species, string currency):Human(name,species,currency)
{
}
//
Nobbs::~Nobbs()
{
}
void Nobbs::payTaxes(){
cout<<citizenName<<" has paid his Taxes in " <<citizenCurrency<<"."<<endl;
}
void Nobbs::Speak(){
cout<<citizenName<< "begins to speak:Oi! I am Nobbs"<<endl;
}
