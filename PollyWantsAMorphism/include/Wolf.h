#ifndef WOLF_H
#define WOLF_H
#include <string>
using namespace std;

class Wolf
{
    public:
        Wolf(bool isHuman,string name, string species, string currency);
        virtual ~Wolf();

    protected:
       string Howl();
       string Growl();
    private:
        string Name;
        string Species;
        string Currency;
};

#endif // WOLF_H
