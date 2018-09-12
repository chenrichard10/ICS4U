#include <iostream>

using namespace std;

void DecrementByOne(int &toReduce){

    toReduce--;

}

int main(){

    int originalInt=5;

    cout<<"originalInt="<<originalInt<<endl;

    DecrementByOne(originalInt);

    cout<<"originalInt="<<originalInt<<endl;

    return 0;

}

