#include <iostream>
using namespace std;

int main()
{

	int monthNumber;
	double days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  };

	//get month number
	cout << "Enter the month number (-1 to stop): ";
	cin >> monthNumber;
	while (monthNumber != -1)
	{
		//display number of days
		if (monthNumber > 0 && monthNumber < 13)
			cout << "Number of days: " << days[monthNumber - 1] << endl;
		else
			cout << "INVALID NUMBER" << endl << endl;
		//end if
		cout << "Enter the month number (-1 to stop): ";
		cin >> monthNumber;
	}  //end while

	   //system("pause");
	return 0;
}