#include "headers/trainerCard.h"
#include <iostream>

TrainerCard::TrainerCard() : Card() {}

TrainerCard::TrainerCard(string _cardName) : Card(_cardName) {}

TrainerCard::TrainerCard(string _cardName, string _trainerEffect) : Card(_cardName), trainerEffect(_trainerEffect) {}

string TrainerCard::getTrainerEffect() const {
    return trainerEffect;
}

void TrainerCard::setTrainerEffect(string _trainerEffect) {
    trainerEffect = _trainerEffect;
}

void TrainerCard::displayInfo() const {
    cout << "Trainer Card - Name: " << getCardName() << ", Effect: " << trainerEffect << endl;
}