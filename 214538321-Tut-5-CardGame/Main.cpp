#include<iostream>
#include<string>

#include "Card.h"

using namespace std;

int main() {
	int CardNumber, error;
	string CardColor;

	cout << "Please enter the card number:" << endl;
	cin >> CardNumber;

	cout << "Please enter the card color:" << endl;
	cin >> CardColor;

	Card card1(CardNumber, CardColor);
	error = card1.Error(CardNumber, CardColor);
	if (error == 1){
		cout << "There card is invalid please re enter" << endl;

	}
	else if (error == 2)
		cout << "the card is valid" << endl;


	system("pause");
	return 0;
}