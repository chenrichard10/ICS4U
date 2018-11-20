#ifndef HUMAN_H
#define HUMAN_H
#include "Citizen.h"
#include <string>
using namespace std;

class Human:public Citizen
{
    public:
        Human(bool isHuman,string citizenName,string species,string currency);
        virtual ~Human();
        void payTaxes();
        void Speak();
    protected:

    private:
};

#endif // HUMAN_H
