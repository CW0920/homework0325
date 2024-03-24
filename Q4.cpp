#include<iostream>
using namespace std;

int main(void) {
	int reviews[4][6] = { {3,1,5,2,1,5},
						  {4,2,1,4,2,4},
						  {3,1,2,4,4,1},
						  {5,1,4,2,4,2} };
	int userRate[6] = { 0,0,0,0,0,0 };
	cout << "   100  101  102  103  104  105" << endl;
	for (int i = 0; i <= 3; i++) {
		cout << i;
		for (int j = 0; j <= 5; j++) {
			cout << "    " << reviews[i][j];
		}
		cout << endl;
	}

	cout << "Enter your rates." << endl;
	int movie;
	for (int i = 0; i <= 2; i++) {
		do {
			cout << "movie 10";
			cin >> movie;
			if (movie < 0 || movie > 5) {
				cout << "No movie 10" << movie << endl;
			}
			else if (userRate[movie] != 0) {
				cout << "You have rated this movie." << endl;
			}
		} while (movie < 0 || movie > 5 || userRate[movie] != 0);
		do {
			cout << "rate(1~5):";
			cin >> userRate[movie];
			if (userRate[movie] < 1 || userRate[movie] > 5) {
				cout << "Only 1 to 5." << endl;
			}
		} while (userRate[movie] < 1 || userRate[movie] > 5);
	}
	double predict = 0;
	double closestPredict = 99999;
	int closestReviewer;
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 5; j++) {
			if (userRate[j] != 0) {
				predict = predict + pow((reviews[i][j] - userRate[j]), 2);
			}
		}
		predict = sqrt(predict);
		if (predict < closestPredict) {
			closestPredict = predict;
			closestReviewer = i;
		}
	}

	for (int i = 0; i <= 5; i++) {
		if (userRate[i] == 0) {
			userRate[i] = reviews[closestReviewer][i];
		}
	}
	cout << "The closest match is reviewer " << closestReviewer << endl
		<< "The predict of your rating:" << endl;
	for (int i = 0; i <= 5; i++) {
		cout << userRate[i] << " ";
	}
	return 0;
}