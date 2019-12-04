#include "card_game.h"

#include <iostream>
#include <cstdlib>
#include <time.h>

CardGame::CardGame(int rounds)
{
    this->rounds = rounds;
    srand(time(0));
}

void CardGame::play()
{
    int player_score=0, computer_score=0;

    for (int i = 0; i < rounds; ++i) 
    {
        int player_card_id = rand()%DECK_SIZE;
        int computer_card_id;

        // computer card and player card cannot be the same
        do {
            computer_card_id = rand()%DECK_SIZE;
        } while(computer_card_id == player_card_id);

        const Card& player_card = card_deck.get_card(player_card_id);
        const Card& computer_card = card_deck.get_card(computer_card_id);
        
        std::cout << "----- Round: " << i+1 << " -----\nPlayers card: ";
        player_card.print();

        std::cout << "Computer card: ";
        computer_card.print();

        if(player_card > computer_card)
            player_score++;
        else if(player_card < computer_card)
            computer_score++;
    }

    std::cout << "\nResult:\nPlayer Score: " << player_score << 
                 "\nComputer Score: " << computer_score << std::endl;

    if(player_score > computer_score)
        std::cout << "Player Wins!" << std::endl;
    else if(player_score < computer_score)
        std::cout << "Computer Wins!" << std::endl;
    else
        std::cout << "It's a Tie!" << std::endl;
}
