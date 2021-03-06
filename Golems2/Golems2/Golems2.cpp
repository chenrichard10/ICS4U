// Golems2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
#include <Windows.h>

using namespace std;

int main()
{
	int randomInt = 0;
	int turnCounter = 0;
	int r = 0;
	int b = 0;
	string playAgain = "    ";
	string difficulty = "    ";
	string instructions = "   ";
	string startGame = "	 ";
	string userInput = "    ";
	string golemPassword = "FWAE";
	string actualPassword = "    ";
	//Used to create color
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// While loop until user does not want to play game again
	while (playAgain != "NO" || playAgain != "N") {
		srand(time(NULL));
		for (int i = 0; i <= 3; i++) {
			randomInt = rand() % 4;
			actualPassword.at(i) = golemPassword.at(randomInt);
			
		}
		//while loop that prompts user if he/she wants to start the game 
		while (startGame != "YES"&&startGame != "Y") {
			//resets instructions in the while loop every time
			instructions = " ";
			while (instructions != "YES" && instructions != "Y" && instructions != "NO" && instructions != "N") {
				//ASCII art for the display screen 
				SetConsoleTextAttribute(h, FOREGROUND_GREEN);
				cout << R"(  _____  ______ ______ ______       _______   _______ _    _ ______    _____  ____  _      ______ __  __  _____ 
 |  __ \|  ____|  ____|  ____|   /\|__   __| |__   __| |  | |  ____|  / ____|/ __ \| |    |  ____|  \/  |/ ____|
 | |  | | |__  | |__  | |__     /  \  | |       | |  | |__| | |__    | |  __| |  | | |    | |__  | \  / | (___  
 | |  | |  __| |  __| |  __|   / /\ \ | |       | |  |  __  |  __|   | | |_ | |  | | |    |  __| | |\/| |\___ \ 
 | |__| | |____| |    | |____ / ____ \| |       | |  | |  | | |____  | |__| | |__| | |____| |____| |  | |____) |
 |_____/|______|_|    |______/_/    \_\_|       |_|  |_|  |_|______|  \_____|\____/|______|______|_|  |_|_____/ 
                                                                                                                )" << '\n';
				SetConsoleTextAttribute(h, 15 | 0);
				cout << "\n\nWelcome to Defeat The Golems! Would you like to know the instructions?:";
				cin >> instructions;
				//capitalizes the input
				transform(instructions.begin(), instructions.end(), instructions.begin(), ::toupper);
			}
			//outputs input if user wants instructions
			if (instructions == "YES" || instructions == "Y") {
				SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
				cout << "\n\n\n\n The golems of the City of Ankh Morpork are rising up!" << endl
					<< "Led by a human named Adora, they have finally had enough long hours and no pay." << endl
					<< "The bad news is that that the golems are nearly invincible." << endl
					<< "The good news is that the golems are controlled by small spells that are put inside their heads." << endl
					<< "If the Watch can determine the right combination then they will be able to return the golems to a docile state."
					<< endl << "The control spells are made up of a sequence of 4 elements selected" << endl
					<< "from the following : Fire(F), Water(W), Air(A), and Earth(E).Duplicates are allowed." << endl
					<< "The City Watch will have to try a series of spells in hopes of disabling the golems." << endl
					<< "Fortunately, the golems have eyes that will glow in a way that will give the Watch some clues." << endl
					<< "Their eyes will glow"; SetConsoleTextAttribute(h, FOREGROUND_RED); cout << " RED ";SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
				cout << "for each element that is in the correct location." << endl
					<< "Their eyes will glow"; SetConsoleTextAttribute(h, FOREGROUND_BLUE); cout << " BLUE "; SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);cout<<"for each element that is correctly included, but in the wrong location." << endl
					<< "For example, if the secret code is FFAW(Fire, Fire, Air, Water) and the Watch guesses FEWA," << endl
					<< "then the eyes will glow RBB.If they were to then guess FAFW, then the eyes will glow RRBB." << endl
					<< "The Watch will get 10 guesses on easy difficulty and 5 guesses on hard difficulty." << endl << endl;
				SetConsoleTextAttribute(h, 15 | 0);
				//prompts user to start the game
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\ Would you like to start the game?(Yes)(No)";
				cin >> startGame;
				/*capitalizes user input. If user input does not input YES or yes they will be redirected back to 
				start screen*/
				transform(startGame.begin(), startGame.end(), startGame.begin(), ::toupper);
			}

			else if (instructions == "NO" || instructions == "N") {
				//prompts user to start the game
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\ Would you like to start the game?(Yes)(No)";
				//reads in user input
				cin >> startGame;
				//capitalizes user input
				transform(startGame.begin(), startGame.end(), startGame.begin(), ::toupper);
			}
		}
		//prompts user to select difficulty
		cout << "\n\n\n\n\n\n\n\nSelect your difficulty:Easy or Hard:";
		//reads in difficulty
		cin >> difficulty;
		//capitalizes user input
		transform(difficulty.begin(), difficulty.end(), difficulty.begin(), ::toupper);
		//while loop until user inputs easy or hard 
		while (difficulty != "EASY" && difficulty != "HARD") {
			cout << "Please enter a valid difficulty:";
			cin >> difficulty;
			transform(difficulty.begin(), difficulty.end(), difficulty.begin(), ::toupper);
		}
		// turnCounter starts counting at 1 if user inputs easy
		if (difficulty == "EASY") {
			turnCounter = 1;
		}
		// turnCounter starts counting at 6  if user inputs easy
		else if (difficulty == "HARD") {
			turnCounter = 6;
		}
		//turnCounter increases as for loop increases 
		for (turnCounter; turnCounter <= 10; turnCounter++) {
			//sets reds to 0
			r = 0;
			//sets blues to 0 
			b = 0;
			//prompts user to enter control spells
			cout << "Summon your control spells(F)(W)(E)(A):";
			//user enter control spells
			cin >> userInput;
			std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
			while (userInput.length() != 4) {
				cout << "Please enter the correct amount of control spells";
				cin >> userInput;
			}
			for (int i = 0; i <= 3; i++) {
				//ensures that user enters a valid code 
				while (userInput.at(i) != 'F'&&userInput.at(i) != 'W'&&userInput.at(i) != 'E'&&userInput.at(i) != 'A') {
					cout << "Please enter valid control spells:";
					cin >> userInput;
				}

			}
			//determine the number of characters in the right location 
			for (int i = 0; i <= 3; i++) {
				if (userInput.at(i) == actualPassword.at(i)) {
					//counts red if userInput at position i is same as actual password at position i
					r++;
					//continues checking the for loop 
					continue;
				}
				for (int j = 0; j <= 3; j++) {
					//if userInput at J is equal to the actual password at position i counts blue
					if (userInput.at(j) == actualPassword.at(i) && userInput.at(j) !=actualPassword.at(j)) {
						{
							b++;
							//avoids counting a letter in B multiple times if theres match in i
							break;
						}
					}
				}
			}
			/*if r does not equal four set console text to red and output 'R' based on value of r
			also ouputs 'B' based on value of b*/
		
			if (r != 4) {
				SetConsoleTextAttribute(h, FOREGROUND_RED);
				cout << std::string(r, 'R');
				SetConsoleTextAttribute(h, FOREGROUND_BLUE);
				cout << std::string(b, 'B') << endl;
				//resets foreground back to white,sets background to black
				SetConsoleTextAttribute(h, 15 | 0);
				cout << "Amount of turns left:" << 10 - turnCounter << endl;
				if (turnCounter == 10 && r != 4) {
					cout << "You have lost the game" << endl << "The password was:" << actualPassword << endl;
				}
			}
			else {
				//ASCII Art
				cout << R"(

__  __               __  __                    _       __            __
\ \/ /___  __  __   / / / /___ __   _____     | |     / /___  ____  / /
 \  / __ \/ / / /  / /_/ / __ `/ | / / _ \    | | /| / / __ \/ __ \/ / 
 / / /_/ / /_/ /  / __  / /_/ /| |/ /  __/    | |/ |/ / /_/ / / / /_/  
/_/\____/\__,_/  /_/ /_/\__,_/ |___/\___/     |__/|__/\____/_/ /_(_)   
                                                                       

    )" << endl;
				break;
			}
		}
		cout << "Would you like to play again ?:";
		cin >> playAgain;
		transform(playAgain.begin(), playAgain.end(), playAgain.begin(), ::toupper);
		if (playAgain == "NO" || playAgain == "N") {
			return 0;
		}
		} 
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
