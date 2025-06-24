#include "iostream"
#include "deck.hpp"
#include "card_utils.hpp"
// g++ main.cpp -o main

using namespace game;

int main() {

/*     Deck new_deck;

    for (int i = 0; i < 52; i++) {
        auto card = new_deck.deal();
        std::cout << rankToString(card->getRank()) << "\t" << suitToString(card->getSuit()) << "\n";
    } */


    Deck shuffled_deck;
    shuffled_deck.shuffle();

    for (int i = 0; i < 52; i++) {
        auto card = shuffled_deck.deal();
        std::cout << rankToString(card->getRank()) + "\t" + suitToString(card->getSuit()) + "\n";
    }

    return 0;
}