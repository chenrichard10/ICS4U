#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Human.h"
#include "Wolf.h"
#include <string>

using namespace std;

class Werewolf: public Human,public Wolf
{
    public:
        Werewolf(string wolfName,string species);
        virtual ~Werewolf();
        void Speak();
        void Howl();
        void Growl();
        void payTaxes();
        void Thank();
    protected:

    private:
};

#endif // WEREWOLF_H
