#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Human.h"
#include <string>
using namespace std;
class Vampire:Human
{
    public:
        Vampire(string name, string species, string currency);
        virtual ~Vampire();
        void payTaxes();
        void Speak();
    protected:

    private:
};

#endif // VAMPIRE_H
