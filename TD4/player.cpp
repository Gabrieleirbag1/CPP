#include "player.h"

Player::Player() {}
Player::Player(string _playerName, vector<Card*> _benchCards, vector<PokemonCard*> _actionCards) :
    playerName(_playerName), benchCards(_benchCards), actionCards(_actionCards) {}