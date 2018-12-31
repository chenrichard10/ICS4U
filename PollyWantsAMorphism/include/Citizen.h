#ifndef CITIZEN_H
#define CITIZEN_H
#include <string>

using namespace std;

class Citizen
{
    public:
        Citizen(string name,string species);
        virtual ~Citizen();
        // Can't create a Citizen object by itself since functions are pure virtual
        virtual void payTaxes()=0;
        virtual void speak()=0;
        string getName();
        string getSpecies();
        virtual void thank()=0;

    protected:
    string citizenName;
    string citizenSpecies;
    private:
};

#endif // CITIZEN_H
