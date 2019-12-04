#ifndef CARD_DECK_H
#define CARD_DECK_H value

#include "card.h"

const int DECK_SIZE = 55;

class CardDeck
{
public:
    CardDeck();
    void print();

    const Card& get_card(int idx);

private:
    Card deck[55];
};

#endif /* ifndef CARD_DECK_H */
