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
	string getNewCardColor() const;
	int getNewCardNo() const;

	//Mutator Functions
	void setNewCardNo(int);
	void setNewCardColor(string);

	//Other Functions
	int Error(int, string);
};


#endif