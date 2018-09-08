#include <iostream>

using namespace std;

int main()
{
    //initialize ending number variable
    int endNum=0;
    //Prompt user to input the ending number
    cout << "Please enter ending number" << endl;
    //User inputs ending number
    cin>> endNum;
    //For loop that counts from 0 by 1 until it reaches the user's inputted number
    for(int i=0; i<=endNum; i++){
    cout<< i <<endl;
    }
    return 0;
}
