#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int startNum=1;
    cout<<"Enter your starting number"<<endl;
    int endNum;
    cin>>endNum;
    while(endNum%2==0){
        cout<<"Please enter an odd number: ";
        cin >> endNum;
    }
    for(int i=startNum;i<=endNum;i+=2){
    cout<<i<<endl;
    }
        return 0;
    }


