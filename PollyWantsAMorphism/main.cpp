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
#include <algorithm>
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
    //ASCII ART
    cout<< R"( _____               ___      _ _           _
/__   \__ ___  __   / __\___ | | | ___  ___| |_ ___  _ __
  / /\/ _` \ \/ /  / /  / _ \| | |/ _ \/ __| __/ _ \| '__|
 / / | (_| |>  <  / /__| (_) | | |  __/ (__| || (_) | |
 \/   \__,_/_/\_\ \____/\___/|_|_|\___|\___|\__\___/|_| )"<<"\n\n\n";
    cout << "Welcome to the Land of Polly Wants a Morphism!You are the city tax collector.\
    \nYou have the option to collect taxes from random citizens.If you choose to collect,\
    \nthe citizen may refuse and the wolf will kill one of them.\
    \nA total of 100 citizen currency must be paid,otherwise the Wolf will devour the citizen.\
    \nMeet your current citizens!\n\n";
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
    vulf->growl();
    vulf->howl();
    vector<Citizen *>::iterator citizen;
    for (citizen = citizeny.begin(); citizen < citizeny.end(); citizen++)
    {
        (*citizen)->speak();
        if ((*citizen)->getSpecies() == "Werewolf")
        {
            ((Werewolf *) *citizen)->growl();
            ((Werewolf *) *citizen)->howl();

        }
    }




    while (taxesPaid == false)
    {
        userTaxFees=0;
        citizenCode = (rand() % citizeny.size());
        //current error cannot access the name
        cout << "\nCollect taxes from " << citizeny[citizenCode]->getName() << "? (YES/Y)(NO/N)\n";
        cin >> collectTaxes;
        transform(collectTaxes.begin(),collectTaxes.end(),collectTaxes.begin(),::toupper);
        while(collectTaxes!="YES"&&collectTaxes!="Y"&&collectTaxes!="NO"&&collectTaxes!="N")
        {
            cout<<"enter a valid answer.\nCollect taxes from " << citizeny[citizenCode]->getName() << "? (YES/Y)(NO/N)"<<endl;
            cin>>collectTaxes;
            transform(collectTaxes.begin(),collectTaxes.end(),collectTaxes.begin(),::toupper);
        }

        if (collectTaxes == "YES"||collectTaxes=="Y")
        {
            randomScenario = ((rand() % 4)+1);
            if (randomScenario == 1)
            {
                citizeny[citizenCode]->payTaxes();
                userTaxFees = rand() % (citizenCurrency+1);
                if(userTaxFees>=50)
                {
                    //outputs cash train for lots of taxes paid
                    cout<<R"(

   ||_     ||_     ||_
  (_-<    (_-<    (_-<
  / _/    / _/    / _/
  _||__   _||__   _||__
_|"""""|_|"""""|_|"""""|
"`-0-0-'"`-0-0-'"`-0-0-'

)";
                }else{
                cout<<"Amount paid:" <<userTaxFees<<endl;
            }
            }
            else if (randomScenario == 2)
            {
                cout << citizeny[citizenCode]->getName() << " refuses to pay taxes...." << endl;
                cout <<citizeny[citizenCode]->getName() <<" has been killed by the wolf."<<endl;
                citizeny.erase(citizeny.begin() + citizenCode);
            }
            else if (randomScenario == 3)
            {
                if(citizeny.size()==1){
                cout <<citizeny[citizenCode]->getName() <<" has been killed by the wolf."<<endl;
                citizeny.erase(citizeny.begin() + citizenCode);
                break;
                }
                cout << citizeny[citizenCode]->getName() << " refuses to pay taxes....Unforunately the wrong citizen was hunted by the wolf in the process" <<endl;
                int randIndex = rand() % (citizeny.size()-1);
                cout <<citizeny[randIndex]->getName() <<" has been killed by the wolf."<<endl;
                citizeny.erase(citizeny.begin() + randIndex);
            }
            else if(randomScenario ==4)
            {
                userTaxFees=rand()%(20)+35;
                cout<<R"(

   ||_     ||_     ||_
  (_-<    (_-<    (_-<
  / _/    / _/    / _/
  _||__   _||__   _||__
_|"""""|_|"""""|_|"""""|
"`-0-0-'"`-0-0-'"`-0-0-'

)";
                cout<<"Big donation from "<<citizeny[citizenCode]->getName()<<"."<<"Amount paid:"<<userTaxFees<<endl;
            }
        }
        else
        {
            //Citizens thank the Officer for not collecting taxes.
            citizeny[citizenCode]->thank();
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
