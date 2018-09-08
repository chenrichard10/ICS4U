#include <iostream>

using namespace std;

int main()
{
    double grade;
    double percentage;
    string str;
    cout<<"Enter your name"<<endl;
    cin>> str;
    cout<<"Enter your mark out of 30:";
    cin>>grade;
    while(grade>30||grade<0){
    cout<<"Impossible!"<<endl<<"Please enter your mark out of 30:";
    cin>>grade;
    }
    percentage=grade/30*100;
    cout.setf(ios::fixed)<<cout.precision(1);
    if(percentage<=100&&percentage>=80){
        cout<<str<<" you scored "<<percentage<<"% and your grade is A";
    }else if(percentage<80&&percentage>=70){
        cout<<str<<" you scored "<<percentage<<"% and your grade is B";
    }else if(percentage<70&&percentage>=60){
        cout<<str<<" you scored "<<percentage<<"% and your grade is C";
    }else if(percentage<60&&percentage>=50){
        cout<<str<<" you scored "<<percentage<<"% your grade is D";
    }else if(percentage<50){
        cout<<str<<" you scored "<<percentage<<"% your grade is F";
    }

    return 0;
}
