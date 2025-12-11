#include <iostream>
#include "headers/card.h"

Card::Card() {}
Card::Card(string _cardName) : cardName(_cardName) {}

string Card::getCardName() const {
    return cardName;
}
