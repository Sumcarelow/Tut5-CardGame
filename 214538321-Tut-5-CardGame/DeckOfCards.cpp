#include "Card.h"

DeckOfCards::DeckOfCards(Card *a[]){
	for (int i = 0; i <= 19; i++)
		Deck[i] = a[i];
}

DeckOfCards::DeckOfCards(){

}

DeckOfCards::~DeckOfCards(){

}