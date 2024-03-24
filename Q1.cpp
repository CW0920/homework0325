#include<iostream>
using namespace std;

void input(int *hour, int *minute) {
	do {
		cout << "Enter the time(hour):";
		cin >> *hour;
	} while (*hour < 0 || *hour >= 24);
	do {
		cout << "Enter the time(minute):";
		cin >> *minute;
	} while (*minute < 0 || *minute >= 60);
}

char conversion(int *hour) {
	if (*hour < 12) {
		return 'A';
	}
	else {
		*hour = *hour - 12;
		return 'P';
	}
}

void output(int hour, int minute, char DayNight) {
	cout << hour << ":" << minute << DayNight << ".M" << endl;
}

int main(void) {
	int hour, minute;
	char day;
	int result;
	do {
		input(&hour, &minute);
		day = conversion(&hour);
		output(hour, minute, day);
		cout << "Enter 0 to end:";
		cin >> result;
	} while (result != 0);
	return 0;
}