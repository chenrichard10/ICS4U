#include <iostream>
using namespace std;

int main()
{
   double grade=0;
   double percentage=0;
   string str;
   string gradeLetter;
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
   if(percentage>=80){
       gradeLetter="A";
   }else if(percentage>=70){
       gradeLetter="B";
   }else if(percentage>=60){
       gradeLetter="C";
   }else if(percentage>=50){
       gradeLetter="D";
   }else if(percentage<50){
       gradeLetter="F";
   }
    cout<<str<<" you scored "<<percentage<<"% and your grade is "+gradeLetter;
   return 0;
}
