#include "Human.h"
#include "Citizen.h"
#include <iostream>
Human::Human(string name, string species) : Citizen(name, species)
{
}
Human::~Human()
{
}
void Human::payTaxes()
{
    cout << citizenName << " has paid his/her taxes in dollars. " << endl;
}
void Human::speak()
{
    cout << citizenName << " speaks: Hi everyone!" << endl;
}
void Human::thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
