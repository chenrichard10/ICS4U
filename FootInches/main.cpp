#include <iostream>
#include <cstdlib>
using namespace std;

string ConvertToFootInchMeasure (int totalInches)
/* Pre: totalInches the total number of inches
Post: The converted, formatted measure is returned*/
{
int feet= totalInches/12;
string formattedFeet=to_string(feet);
int remainingInches= totalInches%12;
string formattedRemainingInches=to_string(remainingInches);
return(formattedFeet+"'"+formattedRemainingInches+"\"");
}

int main()
{
 int inches=96;
 cout<<ConvertToFootInchMeasure(inches);
}
