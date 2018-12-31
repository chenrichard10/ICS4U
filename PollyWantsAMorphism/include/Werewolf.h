#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "Human.h"
#include "Wolf.h"
#include <string>

using namespace std;

class Werewolf: public Human,public Wolf
{
    public:
        Werewolf(string name,string species);
        virtual ~Werewolf();
        void speak();
        void payTaxes();
        void thank();
    protected:

    private:
};

#endif // WEREWOLF_H
