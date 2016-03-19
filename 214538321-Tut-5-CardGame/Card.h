#include<iostream>
#include<string>

using namespace std;

#ifndef CARD_H
#define CARD_H

class Card{
private:
	int newCardNo;
	string newCardColor;

public:
	//Default Constructor and Destructor
	Card();
	~Card();

	//Overload Constructor
	Card(int, string);

	//Accessor Functions
	string colour() const;
	int number() const;

	//Mutator Functions
	void setNewCardNo(int);
	void setNewCardColor(string);

	//Other Functions
	int Error(int, string);
	void print();
};

class DeckOfCards{
private:
	Card *Deck[19];
	Card CardDeck[19];

public:
	//Constructor and Destructor
	DeckOfCards();
	~DeckOfCards();

	//Overload Constructor
	DeckOfCards(Card *a[]);

	//Mutator Function
	void setNewDeck(int number);



};


#endif