#include <iostream>

using namespace std;

int main()
{
    //initialize ending number variable
    int endNum=0;
    //prompt user to enter ending number
    cout<<"Please enter your ending number:";
    //user inputs ending nunmber
    cin>>endNum;
    //while the number is less or not divisble by 3 prompt user to enter another number
    while(endNum%3!=0||endNum<3){
    cout<<"Please enter another number:";
    //user enter another number
    cin>>endNum;
    }
    //for loop that counts from 0 by 3 to user's inputted number
    for(int i=0;i<=endNum;i+=3){
    cout<<i<<endl;
    }
    return 0;
}
