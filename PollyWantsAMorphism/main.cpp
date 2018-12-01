/* November 28, 2018
Richard Chen ICS4U
Description: Program that creates various citizens and their subclasses.
Derived classes inherit their Citizen behvaviours. The City Council must collect all taxes
from the Citizens or else they will get hunted by the Wolf.*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Citizen.h"
#include "Wolf.h"
#include "Human.h"
#include "Troll.h"
#include "Dwarf.h"
#include "Nobbs.h"
#include "Vampire.h"
#include "Zombie.h"
#include "Werewolf.h"
#include <algorithm>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    //reset random number each time
    srand(time(NULL));
    //A total of 100 Citizen Currency must be paid.
    int citizenCurrency = 100;
    int userTaxFees=0;
    int citizenCode=0;
    int randomScenario=0;
    string collectTaxes;
    string decision;
    // boolean to determine if all taxes have been paid.
    bool taxesPaid = false;
    cout << "Welcome to the Land of Polly Wants a Morphism! You are the city tax collector." << endl
         << "You have the option to collect taxes from random citizens. If you choose to collect, the citizen may refuse"<<endl<<" and the wolf will kill them." << endl;
         cout << "A total of 100 citizen currency must be paid,otherwise the Wolf will devour the citizen."<<endl<< "Meet your current citizens!"<<endl;
     //Vector storing all Citizen objects
    vector<Citizen *> citizeny;
    citizeny.push_back(new Human("Bob", "Human"));
    citizeny.push_back(new Werewolf("VereVulf", "Werewolf"));
    citizeny.push_back(new Troll("Shrecc", "Troll"));
    citizeny.push_back(new Dwarf("Pluto", "Dwarf"));
    citizeny.push_back(new Nobbs("Nobby", "Nobbs"));
    citizeny.push_back(new Vampire("Dracula", "Vampire"));
    citizeny.push_back(new Zombie("Fred", "Zombie"));
    //Individually creating Wolf since it is not a Citizen
    Wolf *vulf = new Wolf("Vulf", "Wolf");
    vector<Citizen *>::iterator citizen;
    for (citizen = citizeny.begin(); citizen < citizeny.end(); citizen++)
    {
        (*citizen)->Speak();
        if ((*citizen)->getSpecies() == "Werewolf"){
            ((Werewolf *) *citizen)->Growl();
            ((Werewolf *) *citizen)->Howl();

        }
    }




    while (taxesPaid == false)
    {
        userTaxFees=0;
        citizenCode = (rand() % citizeny.size());
        //current error cannot access the name
        cout << "Collect taxes from " << citizeny[citizenCode]->getName() << "? YES)(NO)"<<endl;
        cin >> collectTaxes;
        if (collectTaxes == "YES")
        {
            randomScenario = ((rand() % 4)+1);
            if (randomScenario == 1)
            {
                citizeny[citizenCode]->payTaxes();
                userTaxFees = rand() % (citizenCurrency+1);
                cout<<"Amount paid:" <<userTaxFees<<endl;
            }
            else if (randomScenario == 2)
            {
                cout << citizeny[citizenCode]->getName() << " refuses to pay taxes...." << endl;
                cout <<citizeny[citizenCode]->getName() <<" has been killed by the wolf."<<endl;
                citizeny.erase(citizeny.begin() + citizenCode);
            }
            else if (randomScenario == 3)
            {
                cout << citizeny[citizenCode]->getName() << " refuses to pay taxes....Unforunately the wrong citizen was hunted by the wolf in the process" <<endl;
                int randIndex = rand() % (citizeny.size()-1);
                cout <<citizeny[randIndex]->getName() <<" has been killed by the wolf."<<endl;
                citizeny.erase(citizeny.begin() + randIndex);
            }
            else if(randomScenario ==4)
            {
                userTaxFees=rand()%(20)+35;
                cout<<" Big donation from "<<citizeny[citizenCode]->getName()<<"."<<"Amount paid:"<<userTaxFees<<endl;
            }
        }
        else
        {
            //Citizens thank the Officer for not collecting taxes.
            citizeny[citizenCode]->Thank();
            userTaxFees=0;
        }
        if(citizeny.size()==0)
        {
            cout<<"All citizens have died."<<endl;
            return 0;
        }
        //subtract citizenCurrency
        citizenCurrency -= userTaxFees;
        if (citizenCurrency <= 0)
        {
            taxesPaid = true;
        }
        else
        {
            cout <<"\nAmount of taxes left to be paid:" << citizenCurrency<<endl;
        }
    }
    cout << "Taxes have been properly paid."<<endl<<"Citizens remaining: "<<citizeny.size();
}
