/*  Richard Chen
ICS4U October 3,2018
Assignment that checks if Officers in the row below them have a matching partner
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    //Constructs inFile object associated with text.txt file
    ifstream inFile("test.txt");
    int numOfficers;
    //Read in the first line as a number
    inFile>>numOfficers;
    // End program if odd number of officers
    if(numOfficers%2!=0)
    {
        cout<<"odd number of officers, officers will not have matching partners or have no partner."
            <<endl<<"bad";
        return 0;
    }
    //numOfficerPairsLeft used to track number of pairs
    int numOfficerPairsLeft=numOfficers;
    //declare an arrat to store the first and second row values
    string rowOne[numOfficers];
    string rowTwo[numOfficers];
    //Read in data row ( second row of file)
    for (int i =0; i<numOfficers; i++)
    {
        inFile>>rowOne[i];
    }
    //read in data row( third row of file)
    for (int j=0; j<numOfficers; j++)
    {
        inFile>>rowTwo[j];
    }
    //for loop for elements of rowOne
    for (int i=0; i<numOfficers; i++)
    {
        //for loop for elements of rowTwo
        for(int j=0; j<numOfficers; j++)
        {
            /*if element at rowOne is equal to element in rowTwo and they are not in the same statement
            check to see if the element of RowOne at position of the element in rowTwo is equal the element of
            rowTwo at the position of the element at rowOne*/
            if (rowOne[i]==rowTwo[j]&&i!=j)
            {
                //subtracts 1 from number of pairs left
                if (rowOne[j]==rowTwo[i])
                {
                    numOfficerPairsLeft-=1;
                }
                 //output if officers have inconsistent partner
                else
                {
                    cout<<"Officers with inconsistent partner:"<<rowOne[i]<<endl;
                }
            }
            //output if officer does not have a partner
            else if(rowOne[i]==rowTwo[j]&&i==j)
            {
                cout<<"Officers without a partner:"<<rowOne[i]<<endl;
            }
        }
    }
    //outputs good if all officers have a matching pair
    if(numOfficerPairsLeft==0)
    {
        cout<<"\n\n\ngood"<<endl;
    }
    //outputs bad if officers do not have a matching pair
    else
    {
        cout<<"\n\n\nbad";
    }
}
