#include "Wolf.h"
#include <iostream>
Wolf::Wolf(string name, string species, string currency)
{
Name=name;
Species=species;
Currency=currency;
cout<<"A "<<Species<<" has appeared!"<<endl;
}

Wolf::~Wolf()
{
cout<<"A "<<Species<<" has died;"<<endl;
}
