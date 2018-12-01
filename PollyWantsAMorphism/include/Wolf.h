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

    protected:
       string Howl();
       string Growl();
    private:
        string Name;
        string Species;
};

#endif // WOLF_H
