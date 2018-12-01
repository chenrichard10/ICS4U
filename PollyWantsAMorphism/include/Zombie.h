#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Human.h"
#include <string>
class Zombie:public Human
{
    public:
        Zombie(string name, string species);
        virtual ~Zombie();
        void payTaxes();
        void Speak();
        void Thank();
    protected:

    private:
};

#endif // ZOMBIE_H
