#include "Nobbs.h"
#include <iostream>
Nobbs::Nobbs(string name, string species) : Human(name, species)
{
}
//
Nobbs::~Nobbs()
{
}
void Nobbs::payTaxes()
{
    cout << citizenName << " has paid his Taxes in dollars." << endl;
}
void Nobbs::speak()
{
    cout << citizenName << " begins to speak:Oi! I am Nobbs" << endl;
}
void Nobbs::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
