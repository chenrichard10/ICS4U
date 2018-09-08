#include <iostream>
using namespace std;

int main()
{
        int endNum=0;
        /* very important to initialize numbers as it could be any number in your memory,
        does not autimatically refresh memory to 0 like Java*/
        cout << "Enter the ending number" << endl;
        cin>>endNum;

        //count from 1 to username
        for(int i=1;i<=endNum;i++){
        cout<<i<<endl;
    }
      return 0;
}
