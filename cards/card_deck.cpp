#include "card_deck.h"

CardDeck::CardDeck()
{
    int i = 0;
    for(unsigned char s = (unsigned char)SUIT::CLUBS; s <= (unsigned char)SUIT::SPADES; s+=(unsigned char)SUIT::CLUBS)
    {
        for(unsigned char v = (unsigned char)VALUE::TWO; v <= (unsigned char)VALUE::ACE; v+=(unsigned char)VALUE::TWO)
        {
            deck[i] = Card( (SUIT)s, (VALUE)v);
            i++;
        }
    }

    deck[i++] = Card(SUIT::JOKER, VALUE::TWO);
    deck[i++] = Card(SUIT::JOKER, VALUE::TWO);
    deck[i++] = Card(SUIT::JOKER, VALUE::TWO);
}

void CardDeck::print()
{
    for (int i = 0; i < DECK_SIZE; ++i)
        deck[i].print();
}

const Card& CardDeck::get_card(int idx)
{
    return deck[idx];
}
