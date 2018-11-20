#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Human.h"
#include "Wolf.h"
#include <string>

using namespace std;

class Werewolf: public Human,public Wolf
{
    public:
        Werewolf(string citizenName,string species,string currency);
        virtual ~Werewolf();
        void Howl();
        void Growl();
        void payTaxes();

    protected:

    private:
};

#endif // WEREWOLF_H
