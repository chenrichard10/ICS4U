#ifndef WOLF_H
#define WOLF_H
#include "Citizen.h"
#include <string>
using namespace std;

class Wolf
{
    public:
        Wolf(string name, string species);
        virtual ~Wolf();
         void howl();
         void growl();

    protected:

    private:
        string wolfName;
        string wolfSpecies;
};

#endif // WOLF_H
