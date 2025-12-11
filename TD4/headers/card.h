#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
    public:
        Card();
        Card(string _cardName);

        string getCardName() const;
        virtual void displayInfo() const = 0;

    private:
        string cardName;

};

#endif