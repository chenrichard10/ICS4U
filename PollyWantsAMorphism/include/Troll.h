#ifndef TROLL_H
#define TROLL_H
#include "Citizen.h"
#include <string>
using namespace std;

class Troll:public Citizen
{
    public:
        Troll(string name,string species);
        virtual ~Troll();
        void payTaxes();
        void speak();
        void thank();
    protected:

    private:
};

#endif // TROLL_H
