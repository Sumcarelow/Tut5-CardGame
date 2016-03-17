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