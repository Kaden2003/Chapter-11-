#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


//double function(double average2)
//{
//	double average;
//	average = (average2 )
//}

int main() {
	double sum = 0;
	double average;
	double highscore =0;
	double lowscore =100;
	double testScore;
	string result;
	double scoreArray[10] = { 0.0 };
	

	for (int i = 0; i < size(scoreArray); i++) {
		cout << "Enter a test score or 999 to quit >> ";
		cin >> scoreArray[i];
	}

	for (int i = 0; i < size(scoreArray); i++) {
		sum += scoreArray[i];
		if (scoreArray[i] < lowscore)
		{
			lowscore = scoreArray[i];
		}
		if (scoreArray[i] > highscore)
		{
			highscore = scoreArray[i];
		}
	}
	average = sum / 10;

	for (int i = 0; i < 10; i++)
	{
		cout << scoreArray << endl;
	}
	
	cout << "Highscore:" << highscore << endl;
	cout << "Low Score:" << lowscore << endl;
	cout << "Average: " << average << endl;
	
	system("pause");
	return 0;
}