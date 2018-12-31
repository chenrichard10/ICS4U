#ifndef HUMAN_H
#define HUMAN_H
#include "Citizen.h"
#include <string>
using namespace std;

class Human:public Citizen
{
    public:
        Human(string name,string species);
        virtual ~Human();
        void payTaxes();
        void speak();
        void thank();
    protected:

    private:
};

#endif // HUMAN_H
