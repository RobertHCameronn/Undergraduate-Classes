//Robert Cameron 
// ITSE 1302 
//11-17-2022
//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>
#include <iostream>
using namespace std;
int main()
{
	//declare array
	int scores[20] = { 90, 54, 23, 75, 67, 89, 99, 100, 34, 99,
	  97, 76, 73, 72, 56, 73, 72, 20, 86, 99 };
	int stop = -1;
	int testScores = 0;
	int totalScores = 0;


	while (testScores != -1)
	{
		cout << "(Enter -1 to stop) Please Enter in the Test Score 0-100: ";
		cin >> testScores;
		totalScores = 0;


		if (testScores == -1)
		{
			cout << "***Thank you for using this Program =)*** " << endl;
		}

		for (int sub = 0; sub < 20; sub++)
		{
			if (testScores == scores[sub])
			{


				totalScores += 1;
			}
		}
		cout << "Total Test Score: " << totalScores << endl;
	} //endwhile


	return 0;
} //end of main function
