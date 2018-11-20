#include "Werewolf.h"
#include <iostream>

Werewolf::Werewolf(string citizenName,string species,string currency):Human(citizenName,species,currency),Wolf(citizenName,species,currency)
{
   cout<<"Meow I'm a werewolf"<<endl;
}

Werewolf::~Werewolf()
{
    cout<<"OOF I died"<<endl;
}
void Werewolf::payTaxes()
{
    cout<<"I paid my taxes"<<endl;
}
void Werewolf::Growl()
{
    cout<<"GRRRRRRRRRRRRRR"<<endl;
}
void Werewolf::Howl()
{
    cout<<"AWOOOOOOOOOOOO"<<endl;
}
