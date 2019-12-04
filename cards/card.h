#ifndef CARD_H
#define CARD_H value

const char SUIT_MASK = 0b10000111;

enum class SUIT : unsigned char
{
    CLUBS   = 0b00000001,
    DIAMOND = 0b00000010,
    HEARTS  = 0b00000011,
    SPADES  = 0b00000100,
    JOKER   = 0b10000000
};
enum class VALUE : unsigned char
{
    NONE    = 0,
    TWO     = 1  << 3,
    THREE   = 2  << 3,
    FOUR    = 3  << 3,
    FIVE    = 4  << 3,
    SIX     = 5  << 3,
    SEVEN   = 6  << 3,
    EIGHT   = 7  << 3,
    NINE    = 8  << 3,
    TEN     = 9  << 3,
    JACK    = 10 << 3,
    QUEEN   = 11 << 3,
    KING    = 12 << 3,
    ACE     = 13 << 3,
};

class Card
{
public:
    Card(SUIT suit, VALUE value);
    Card();
    SUIT get_suit() const;
    VALUE get_value() const;
    bool is_joker() const;
    bool is_none() const;
    void print() const;

    bool operator ==(const Card& o) const;
    bool operator <(const Card& o) const;
    bool operator >(const Card& o) const;

private:
    unsigned char card;
};

#endif /* ifndef CARD_H */
