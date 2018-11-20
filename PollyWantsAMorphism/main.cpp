#include <iostream>
#include "Citizen.h"
#include "Wolf.h"
#include "Human.h"
#include "Troll.h"
#include "Dwarf.h"
#include "Nobbs.h"
#include "Vampire.h"
#include "Zombie.h"
#include "Werewolf.h"
using namespace std;

int main()
{
  Werewolf* Vulf=new Werewolf("Wolf","Werewolf","Dollars");
  Vulf->Growl();
  Vulf->Howl();
  delete Vulf;
}

