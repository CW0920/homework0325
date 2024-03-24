#include<iostream>
using namespace std;

int main(void) {
	int password[5] = { 1,2,3,4,5 };
	int PINnumber[10];
	int passwordPIN[5];
	int input[5];
	srand(time(NULL));

	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM:";
	for (int i = 0; i <= 9; i++) {
		PINnumber[i] = rand() % 3 + 1;
		cout << " " << PINnumber[i];
	}

	for (int i = 0; i <= 4; i++) {
		passwordPIN[i] = PINnumber[password[i]];
	}

	cout << endl << "Enter the password." << endl;
	for (int i = 0; i <= 4; i++) {
		cin >> input[i];
	}

	bool result = true;
	for (int i = 0; i <= 4; i++) {
		if (input[i] != passwordPIN[i]) {
			result = false;
		}
	}

	if (result) {
		cout << "Access permission." << endl;
	}
	else {
		cout << "Access denied" << endl;
	}

	return 0;
}