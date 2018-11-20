#include "Human.h"
#include "Citizen.h"
#include <iostream>
// first parentheses declares the variables into constructor, second passes it into Citizen constructor
Human::Human(bool isHuman,string citizenName,string species,string currency):Citizen(citizenName,species,currency)
{
    isHuman=true;
    if(isHuman){
    cout<<citizenName <<" has been created. It is a "<<citizenSpecies<<endl;
    }
}
Human::~Human()
{
    cout<<citizenName<<" has died" <<endl;
}
void Human::payTaxes(){
    // now outputs variables from Citizen.cpp
    cout<<citizenName<<" has paid his/her taxes in "<<citizenCurrency<<endl;
}
void Human::Speak(){
cout<<citizenName<< " says Hi"<< endl;
}

