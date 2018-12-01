#ifndef HUMAN_H
#define HUMAN_H
#include "Citizen.h"
#include <string>
using namespace std;

class Human:public Citizen
{
    public:
        Human(string humanName,string species);
        virtual ~Human();
        void payTaxes();
        void Speak();
        void Thank();
    protected:

    private:
};

#endif // HUMAN_H
