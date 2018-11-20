#include "Citizen.h"
#include <iostream>

Citizen::Citizen(string CitizenName,string Species,string Currency)
{
 citizenName=CitizenName;
 citizenCurrency=Currency;
 citizenSpecies=Species;
}
Citizen::~Citizen()
{

}
