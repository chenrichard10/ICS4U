#include <iostream>

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
    string answer;
    int inches;
    do{
    cout<<"Please enter in the initial measure:";
    cin>> inches;
    cout<<"The converted measure is "<<ConvertToFootInchMeasure(inches)<<endl;
    cout<<"Would you like to convert again:";
    cin>>answer;
    }while(answer=="Y"||answer=="y"||answer=="yes"||answer=="Yes");
    return 0;
    }

