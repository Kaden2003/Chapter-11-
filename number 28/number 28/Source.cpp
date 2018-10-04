#include <iostream>
using namespace std;

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int max = 100;
	int min = 1;
	double compnum = 0.0;
	int total = 0;
	double scores[20];
	
	

	
		for (int i = 0; i < size(scores); i++)
		scores[i] = rand() % 100;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
		while (searchScore >= 0)
		{
			
			compnum = rand() % (max + min) + min;
			
			total = 0;
			//search for score
			
			
			for (int x = 0; x < 20; x += 1) {
			
				if (scores[x] == searchScore)
					total += 1;
			}
			
			//end if    
			//end for

			//display total
			cout << "Number of students earning a score of "
				<< searchScore << ": "
				<< total << endl << endl;

			cout << "Enter a score from 0 through 100 (-1 to end): ";
			cin >> searchScore;
		}  //end while


	
	
	system("pause");
	return 0;
}	//end of main function