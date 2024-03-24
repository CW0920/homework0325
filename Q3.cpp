#include<iostream>
using namespace std;

int main(void) {
	int grades;
	int histogramCount[6] = { 0,0,0,0,0,0 };
	cout << "Enter grades(0~5) for each student.(enter -1 to quit)" << endl;
	do {
		cin >> grades;
		if (grades >= 0 && grades <= 5) {
			histogramCount[grades]++;
		}
		else if (grades != -1) {
			cout << "Wrong input." << endl;
		}
	} while (grades != -1);
	
	for (int i = 0; i <= 5; i++) {
		cout << histogramCount[i] << " grade(s) of " << i << endl;
	}

	return 0;
}