#ifndef NOBBS_H
#define NOBBS_H
#include "Human.h"

using namespace std;
class Nobbs:public Human
{
    public:
        Nobbs(string name, string species);
        virtual ~Nobbs();
        void payTaxes();
        void speak();
        void thank();
    protected:
    private:
};

#endif // NOBBS_H
