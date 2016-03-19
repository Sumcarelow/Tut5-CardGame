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

int Card::number() const{
	return newCardNo;

}

string Card::colour() const{
	return newCardColor;
}

void Card::setNewCardNo(int n) {
	newCardNo = n;
}

void Card::setNewCardColor(string color) {
	newCardColor = color;
}
int Card::Error(int number, string color) {

	if (number <= 0 || number >= 11 || color != "red" && color != "black")
		return 1;
	else if (number <= 10 || number >= 1 || color == "red" || color == "black")
		return 2;

	}

void Card::print(){
	cout << "The colour is:" << newCardColor <<endl<< "The card number is:" <<newCardNo<< endl;
}


