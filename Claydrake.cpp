#pragma once
#include <string>
/* TODO:
	replace all the std::strings with something more clean
	clean main method for abstraction
	move variables to header file
	create a true intro to the game: explains the plotline with music to go along with it
*/
void GameIntro();

class Player 
{
public:
	std::string AskAndConfirmPlayerName();
private:
	std::string PlayerName = "";
	std::string AcceptName = "";
};



// CURRENT BUGS : None at the moment! :D
