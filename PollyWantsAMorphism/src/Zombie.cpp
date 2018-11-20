#include "Zombie.h"
#include <iostream>
Zombie::Zombie(string name, string species, string currency):Human(name,species,currency)
{
}

Zombie::~Zombie()
{
}
void Zombie::payTaxes(){
cout<<citizenName<<" has paid his Taxes in " <<citizenCurrency<<"."<<endl;
}
void Zombie::Speak(){
cout<<citizenName<<" has spoken:yum yum brains."<<endl;
}
