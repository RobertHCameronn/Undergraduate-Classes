//Robert H Cameron
// ITSE Final Project
// 11-21-22
// ================================= Sport's Tournament Program=================================
//* Program should store and organize four teams, of two, into brackets and then show the results of the tournament and ultimately have the winner as the output.
//* The Program also includes relevant information regarding the Tournament including the following: In-Game Rules for Smash Bro Ultimate, Event Details, Student Guidelines, and Tournament Prizes. 
//* The Program also offers a Tournament Menu which creates the bracket after user inputs team names and then asks user which teams won and then program displays the winning team.
// ==============================================================================================
#include <stdlib.h> 
#include <iostream>
#include <string>
using namespace std;

void returnMenu()
{
	cout << "Returning to Main Menu...";
}
void teamSub()
{

	cout << "Please Enter in The Names of All Four Teams Below (at least 5 characters long, only letters can be used; no numbers, special characters, spaces, or symbols): " << endl << endl;
}	
void guidelinesSub()
{
	cout << "Student Guidelines" << endl;
	cout << "__________________" << endl << endl;
	cout << "Students must Remain Respectful of Others throughout the Tournament. Failure to do so will result in an automatic withdrawal from the Tournament and may hinder your ability to apply for Future Tournaments hosted by IGDA Club at Tyler Junior College." << endl;
	cout << "Also Reference the Student Handbook for more information regarding this issue and more." << endl << endl << endl;
	cout << "Event Details" << endl;
	cout << "_____________" << endl << endl;
	cout << "Time/Date: To Be Determined" << endl;
	cout << "Where: TJC Rodgers Student Center - APACHE 4" << endl << endl;
	cout << "Thank you & We hope you Enjoy the Smash Bros Ultimate Tournament";
}
void rulesSub()
{
	cout << "Format: 2v2" << endl;
	cout << "Stock: 4" << endl;
	cout << "Time Limit:6 minutes" << endl;
	cout << "Items: 0" << endl;
	cout << "Stage Selection: Random" << endl;
	cout << "Stage Hazard Toggle: Off" << endl;
	cout << "Final Smash Meter: Off" << endl;
	cout << "Spirits: Off" << endl;
	cout << "Damage Handicap: Off" << endl;
	cout << "First to: 1 Win" << endl;
	cout << "Launch Rate: 1.0x" << endl;
	cout << "Underdog Boost: Off" << endl;
	cout << "Score Display: Off" << endl;
	cout << "% Show Damage: Yes" << endl;
	cout << "Custom Balance: Off" << endl;
	cout << "Echo Fighters: Separate" << endl;
	cout << "Radar: Big" << endl;
	cout << "Pausing: Off" << endl;
	cout << "If time runs out, the winner is first determined by how man stocks remain., and then by the percentage after time is up" << endl;
	cout << "If both stock and percentage are the same, or a game ends in both players losing their last stock at the same time, then a tiebreaker is played, which consists of a 1 stock and 3 minute match with the same characters and the same stage." << endl;
}
void prizes()
{
	cout << "First Place: " << endl << endl;
	cout << "Second Place: Giftcard" << endl << endl;
	cout << "Third Place: TBD" << endl;
}
void quit()
{
	cout << "Exiting Program..." << endl;
	cout << "***Remember to read our event guidelines and student handbook references before competing in the tournament***" << endl << endl;
	cout << "***Dont forget to ask an IGDA Professor Club Sponser or Club Officer if you have any further questions***" << endl;
	cout << "Goodluck  and we hope you enjoy the Smash Bros Ultimate 2v2 Tournament hosted by IGDA" << endl;
}
void tournamentMenu()
{
	cout << "Please Follow directions below: " << endl;
}
void menu() 
{
	char choice = ' ';
	int backtoMenu = 1;
	int menuOptions = 0;
	string teamOne = " ";
	string teamTwo = " ";
	string teamThree = " ";
	string teamFour = " ";
	string Players[4] = { teamOne, teamTwo, teamThree, teamFour };
	string bracket[4][3] = { };
	int randomizeTeams = rand()%4;
	char randomize = ' ';
	int menuSwitch = 0;
	cout << "Smash Bros Ultimate 2v2 Tournament" << endl;
	cout << "__________________________________" << endl << endl << endl;
	cout << "Menu Options (Please Enter 1-6)";
	cout << "------------------------------" << endl << endl;
	cout << "1. Enter Team Names " << endl;
	cout << "2. Student Guidelines & Event Details" << endl;
	cout << "3. In-Game Rules" << endl;
	cout << "4. Tournament Prizes" << endl;
	cout << "5. Tournament Menu" << endl;
	cout << "6. Quit" << endl;
	cin >> menuOptions;
	switch (menuOptions)
	{
	case 1:
		cout << " " << endl << endl;
		cout << "Hosted by the International Game Developers Association (IGDA)" << endl;
		cout << "_________________________________________________" << endl << endl;
		break;
	case 2:
		cout << " " << endl << endl;
		cout << "Hosted by the International Game Developers Association (IGDA)" << endl;
		cout << "______________________________________________________________" << endl << endl << endl;
		break;
	case 3:
		cout << " " << endl << endl;
		cout << "Tournament In-Game Rules" << endl;
		cout << "------------------------" << endl;
		break;
	case 4:
		cout << " " << endl << endl;
		cout << "Tournament Prizes" << endl;
		cout << "_________________" << endl << endl;
		break;
	case 5:
		cout << " " << endl << endl;
		cout << "Tournament Menu" << endl;
		cout << "_________________" << endl << endl;
		break;
	case 6:
		cout << "Goodbye!" << endl << endl;
		break;
	case 7:
		cout << " ";
		break;
	} //end switch
	if (menuOptions == 1)
	{
		teamSub();		
		cout << "Please Enter in Team 1: ";
		cin >> teamOne;
		cout << "Please Enter in Team 2: ";
		cin >> teamTwo;
		cout << "Please Enter in Team 3: ";
		cin >> teamThree;
		cout << "Please Enter in Team 4: " ;
		cin >> teamFour;
		cout << "Please Enter in the integer 7 to return to Main Menu: ";
		
	}
	else if (menuOptions == 2)
	{
		guidelinesSub();
	}
	else if (menuOptions == 3)
	{
		rulesSub();
	}
	else if (menuOptions == 4)
	{
		prizes();
	}
	else if (menuOptions == 5)
	{
		
		tournamentMenu();
		cout << "Please Enter in the Letter R to randomize teams: ";
		cin >> randomize;
		while(randomize != -1)
		{
			Players[4] = randomizeTeams;
		}
		while (randomize != -1)
		{
			printf("4%", Players[4]);
		}


		
	}
	else if (menuOptions == 6)
	{
		quit();
	}
	else if (menuOptions == 7)
	{
		returnMenu();
		switch (menuOptions);
		
	}
}
int main()
{
	menu(); //calling void function


	return 0;
}