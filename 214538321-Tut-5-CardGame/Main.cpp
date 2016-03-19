#include<iostream>
#include<string>

#include "Card.h"

using namespace std;

int main() {
	int CardNumber;
	string CardColor;

	cout << "Please enter the card number:" << endl;
	cin >> CardNumber;

	cout << "Please enter the card color:" << endl;
	cin >> CardColor;

	Card card1(CardNumber, CardColor);

	cout << "the card number is:" << endl << card1.getNewCardNo() << endl;

	system("pause");
	return 0;
}