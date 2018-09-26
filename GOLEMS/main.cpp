#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
		//constantly changes random numbers
		srand(time(0));
		int randomInt=0;
		char golemPassword[]={'F','W','A','B'};
		char actualPassword[4];
			for (int i=0; i<=3; i++) {
				//generates a random number between 1 and 4+
				randomInt = rand()%3;
				actualPassword[i]=golemPassword[randomInt];
				}
                return 0;
			}


