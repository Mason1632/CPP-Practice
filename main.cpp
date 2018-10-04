#include <iostream>
#include <Windows.h>
#include <string>
#include "Claydrake.h"


Player PlayerOne;

// true entry to application
int main() 
{
	GameIntro();	
	PlayerOne.AskAndConfirmPlayerName();
	return 0;
}
// introduce the game. add some music as an 'intro'
void GameIntro() 
{
	std::cout << "Welcome to Claydrake: World of Monsters" << std::endl;
	Beep(300, 250);
	Beep(330, 250);
	Beep(360, 250);
	Beep(300, 250);
	Beep(330, 250);
	Beep(360, 250);
	return;
}
