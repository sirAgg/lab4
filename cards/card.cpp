#include "card.h"

#include <iostream>

Card::Card(SUIT suit, VALUE value)
{
    card = (char)suit | (char)value;
}

Card::Card(): Card(SUIT::JOKER, VALUE::NONE) {}

SUIT Card::get_suit() const
{
    return (SUIT)(card & SUIT_MASK);
}

VALUE Card::get_value() const
{
    return (VALUE)(card & ~SUIT_MASK);
}

bool Card::is_joker() const
{
    return get_suit() == SUIT::JOKER;
}

bool Card::is_none() const
{
    return VALUE::NONE == get_value();
}

void Card::print() const
{
    switch (get_suit()) {
        case SUIT::HEARTS:  std::cout << "Heart"; break;
        case SUIT::SPADES:  std::cout << "Spades"; break;
        case SUIT::DIAMOND: std::cout << "Diamond"; break;
        case SUIT::CLUBS:   std::cout << "Club"; break;
        case SUIT::JOKER:   std::cout << "Joker\n"; return; // special case
    }

    std::cout << " ";

    switch(get_value())
    {
        case VALUE::TWO :    std::cout << "Two";    break;
        case VALUE::THREE :  std::cout << "Three";  break;
        case VALUE::FOUR :   std::cout << "Four";   break;
        case VALUE::FIVE :   std::cout << "Five";   break;
        case VALUE::SIX :    std::cout << "Six";    break;
        case VALUE::SEVEN :  std::cout << "Seven";  break;
        case VALUE::EIGHT :  std::cout << "Eight";  break;
        case VALUE::NINE :   std::cout << "Nine";   break;
        case VALUE::TEN :    std::cout << "Ten";    break;
        case VALUE::JACK :   std::cout << "Jack";   break;
        case VALUE::QUEEN :  std::cout << "Queen";  break;
        case VALUE::KING :   std::cout << "King";   break;
        case VALUE::ACE :    std::cout << "Ace";    break;
        case VALUE::NONE :   std::cout << "None";   break;
    }
    std::cout << "\n";
}
    
bool Card::operator ==(const Card& o) const
{
    return card == o.card;
}
bool Card::operator <(const Card& o) const
{
    return card < o.card;
}
bool Card::operator >(const Card& o) const
{
    return card > o.card;
}
