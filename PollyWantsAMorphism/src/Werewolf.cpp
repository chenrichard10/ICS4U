#include "Werewolf.h"
#include <iostream>

Werewolf::Werewolf(string wolfName, string species) : Human(wolfName, species), Wolf(wolfName, species)
{
}

Werewolf::~Werewolf()
{
}
void Werewolf::payTaxes()
{
    //curent errrors
    cout << citizenName << " has paid his taxes" << endl;
}
void Werewolf::Speak()
{
    cout << citizenName << " begins to to speak: I've acquired the bad qualities of both species..." << endl;
}
void Werewolf::Growl()
{
    cout << citizenName << "'s mouth is trying to say something: GRRRRRRRRRRRRRR" << endl;
}
void Werewolf::Howl()
{
    cout << citizenName << "'s mouth is trying to say something: AWOOOOOOOOOOOO" << endl;
}
void Werewolf::Thank()
{
    cout << citizenName << " appreciates the kind gesture.";
}
