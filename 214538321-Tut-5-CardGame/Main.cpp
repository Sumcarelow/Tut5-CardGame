#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include "Card.h"

using namespace std;

int main() {
	int CardNumber, error;
	string CardColor;
//myFunc:
//	{
//		cout << "Please enter the card number:" << endl;
//		cin >> CardNumber;
//		
//		cout << "Please enter the card color:" << endl;
//		cin >> CardColor;
//	};
//	Card card1(CardNumber, CardColor);
//	Card *deck;
//	deck = new Card[19];
//	error = card1.Error(CardNumber, CardColor);
//	/*for (int i = 0; i <= 19; i++)*/
//	{
//		if (error = 1){
//			{ cout << "The card is invalid please re enter" << endl;
//			goto myFunc;
//			}
//		}
//		else if (error = 2){
//			cout << "the card is valid" << endl;
//			goto myFunc;
//		}
//	}
//	card1.print();
//
//	DeckOfCards deck1(&deck);


	vector <int, string> Deck;
	for (int i = 0; i <= 9; i++)
		Deck.push_back(i, "black");

	for (int c = 0; c <= 9; c++)
		Deck.push_back(i, "red");

	random_shuffle(Deck.begin(), Deck.end());

	for (int p = 0; p <= 18; p++)
		cout << Deck[p] << endl;
	system("pause");
	return 0;
}