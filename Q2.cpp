#include<iostream>
using namespace std;

double convertToMPH(int min, int sec) {
	return 1 / (double(min) / 60 + double(sec) / 360);
}

double convertToMPH(double mph) {
	return mph * 1.61;
}

int main(void) {
	int min, sec;
	double kph;
	cout << "Enter minutes and seconds per mile." << endl;
	cout << "minutes:" << endl;
	cin >> min;
	cout << "seconds:" << endl;
	cin >> sec;
	cout<<"kilometers per hour (kph):"<< convertToMPH(convertToMPH(min, sec)) << endl;
	return 0;
}