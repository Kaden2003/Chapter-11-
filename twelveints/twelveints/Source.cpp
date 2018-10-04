#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	double Array[12] = { 0.0 };
	int z;
	
	for (int i = 0; i < size(Array); i++) {
		cout << "Enter a number ";
		cin >> Array[i];
	}
	
	sort(Array, Array + size(Array));

	for (int i = 0; i < size(Array); i++) {
		cout << Array[i] << endl;
	}
	

	system("pause");
	return 0;
}