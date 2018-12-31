#include "Zombie.h"
#include <iostream>
Zombie::Zombie(string name, string species) : Human(name, species)
{
}

Zombie::~Zombie()
{
}
void Zombie::payTaxes()
{
    cout << citizenName << " has paid his Taxes in dollars." << endl;
}
void Zombie::speak()
{
    cout << citizenName << " has spoken:yum yum brains." << endl;
}
void Zombie::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
