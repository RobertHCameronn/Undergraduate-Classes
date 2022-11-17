
//Robert H. Cameron
//ITSE 1302
//11-17-22


#include <iostream>
using namespace std;

int main()

{
	//declarations

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int stop = -1;
	int month = 0;



	while (month != -1)
	{
		//use an input as the subscript for an array
		cout << "Please Enter in a Month in number text character **ex: 10 = October** (-1 to stop): ";
		cin >> month;

		//validate the data
		if (month > 12)
		{
			cout << "***ERROR*** Please Enter in a number 1-12 " << endl;
		}
		
		else if (month == -1)
		{
			cout << "***Thank you for using this program =)***  " << endl;
		}
		
		else
		{
			cout << "Days: " << days[month - 1] << endl;
		}


		
	} //end while

	return 0;

}
