#ifndef ENERGY_CARD_H
#define ENERGY_CARD_H

#include "card.h"

class EnergyCard : public Card
{
public:
    EnergyCard();
    EnergyCard(string _cardName);

    string getEnergyType() const;
    void setEnergyType(string);

private:
    string energyType;
};

#endif