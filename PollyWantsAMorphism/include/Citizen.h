#ifndef CITIZEN_H
#define CITIZEN_H
#include <string>

using namespace std;

class Citizen
{
    public:
        Citizen(string CitizenName,string Species);
        virtual ~Citizen();
        // Can't create a Citizen object by itself since functions are pure virtual
        virtual void payTaxes()=0;
        virtual void Speak()=0;
        string getName();
        string getSpecies();
        virtual void Thank()=0;
        
    protected:
    string citizenName;
    string citizenSpecies;
    private:
};

#endif // CITIZEN_H
