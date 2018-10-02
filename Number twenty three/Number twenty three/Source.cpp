#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	int pointsArray[5] = { 62, 75, 100, 83, 85 };
	char gradesArray[5] = { 'D', 'C', 'A', 'B', 'B' };

	int x = 0;

	cout << pointsArray[x] << "->" << gradesArray[x] << endl;
	x += 1;
	cout << pointsArray[x] << "->" << gradesArray[x] << endl;
	x += 1;
	cout << pointsArray[x] << "->" << gradesArray[x] << endl;
	x += 1;
	cout << pointsArray[x] << "->" << gradesArray[x] << endl;
	x += 1;
	cout << pointsArray[x] << "->" << gradesArray[x] << endl;
	x += 1;


	system("pause");
	return 0;



}