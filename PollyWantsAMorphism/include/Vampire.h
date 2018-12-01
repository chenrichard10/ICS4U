#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Human.h"
#include <string>
using namespace std;
class Vampire:public Human
{
    public:
        Vampire(string name, string species);
        virtual ~Vampire();
        void payTaxes();
        void Speak();
        void Thank();
    protected:

    private:
};

#endif // VAMPIRE_H
