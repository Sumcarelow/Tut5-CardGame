#include "Card.h"

Card::Card() {
	newCardNo = 0;
}

Card::~Card() {

}

Card::Card(int a, string b){
	newCardNo = a;
	newCardColor = b;
}

int Card::getNewCardNo() const{
	return newCardNo;

}

string Card::getNewCardColor() const{
	return newCardColor;
}

void Card::setNewCardNo(int n) {
	newCardNo = n;
}

void Card::setNewCardColor(string color) {
	newCardColor = color;
}
int Card::Error(int number, string color) {

	if (number < 1 || number > 10 || color != "red" || color != "black")
		return 1;
	else
		return 2;

	}


