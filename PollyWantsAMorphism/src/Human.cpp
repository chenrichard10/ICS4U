#include "Human.h"
#include "Citizen.h"
#include <iostream>
Human::Human(string humanName, string species) : Citizen(humanName, species)
{
}
Human::~Human()
{
}
void Human::payTaxes()
{
    cout << citizenName << " has paid his/her taxes in dollars. " << endl;
}
void Human::Speak()
{
    cout << citizenName << " speaks: Hi everyone!" << endl;
}
void Human::Thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
