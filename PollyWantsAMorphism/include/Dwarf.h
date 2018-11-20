#ifndef DWARF_H
#define DWARF_H
#include "Citizen.h"
#include <string>

class Dwarf:public Citizen
{
    public:
        Dwarf(string dwarfName, string species, string currency);
        virtual ~Dwarf();
        void payTaxes();
        void Speak();
    protected:

    private:
};

#endif // DWARF_H
