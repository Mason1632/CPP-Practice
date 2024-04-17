#include "Claydrake.h"
#include <iostream>
#include <Windows.h>
#include <string>


// Asks the player's name and confirms it with the player (Y or N). Continues to ask until player is satisfied with choice (typed Y)
std::string Player::AskAndConfirmPlayerName()
{
	while (PlayerName == "")
	{
		std::cout << "Please enter your Name: ";
		std::getline(std::cin, PlayerName);

		while (PlayerName != "")
		{
			std::cout << "You have entered " << PlayerName << ". Is this okay? Please type 'Y' (yes) or 'N' (no)." << std::endl;
			std::getline(std::cin, AcceptName);

			if ((AcceptName[0] == 'Y') || (AcceptName[0] == 'y'))
			{
				Beep(400, 150);
				Beep(600, 150);
				Beep(800, 150);
				break;
			}
			else if ((AcceptName[0] == 'N') || (AcceptName[0] == 'n'))
			{
				Beep(200, 250);
				PlayerName = "";
				AcceptName = "";

			}

		}

	}
	std::cout << "Alright " << PlayerName << ", let's go!\n";
	return PlayerName;
}
