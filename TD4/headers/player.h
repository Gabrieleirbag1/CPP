#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "card.h"
#include "pokemonCard.h"

using namespace std;

class Player {
    public:
        Player();
        Player(string);
        Player(string, vector<Card*>, vector<PokemonCard*>);

    private:
        string playerName;
        vector<Card*> benchCards;
        vector<PokemonCard*> actionCards;
};

#endif