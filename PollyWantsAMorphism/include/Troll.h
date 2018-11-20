#ifndef TROLL_H
#define TROLL_H
#include "Citizen.h"
#include <string>
using namespace std;

class Troll:public Citizen
{
    public:
        Troll(string TrollName,string species,string currency);
        virtual ~Troll();
        void payTaxes();
        void Speak();
    protected:

    private:
};

#endif // TROLL_H
