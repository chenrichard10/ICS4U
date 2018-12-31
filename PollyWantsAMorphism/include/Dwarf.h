#ifndef DWARF_H
#define DWARF_H
#include "Citizen.h"
#include <string>

class Dwarf:public Citizen
{
    public:
        Dwarf(string name, string species);
        virtual ~Dwarf();
        void payTaxes();
        void speak();
        void thank();
    protected:

    private:
};

#endif // DWARF_H
