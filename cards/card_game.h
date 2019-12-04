#ifndef CARD_GAME_H
#define CARD_GAME_H value

#include "card_deck.h"

class CardGame
{
public:
    CardGame(int rounds);

    void play();

private:

    CardDeck card_deck;
    int rounds = 0;
    
};

#endif /* ifndef CARD_GAME_H */
