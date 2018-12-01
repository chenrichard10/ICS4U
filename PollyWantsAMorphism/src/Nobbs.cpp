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
void Nobbs::Speak()
{
    cout << citizenName << " begins to speak:Oi! I am Nobbs" << endl;
}
void Nobbs::Thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}