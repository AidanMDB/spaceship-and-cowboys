#include "deck.hpp"


namespace game {
    Deck::Deck() {
        for (int s = 0; s < 4; s++) {
            for (int r = 1; r < 14; r++) {
                Card::Suit suit = static_cast<Card::Suit>(s);
                Card::Rank rank = static_cast<Card::Rank>(r);
                deck.push_back(std::make_unique<Card>(rank, suit));
            }
        }
    }


    void Deck::shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());

        std::shuffle(deck.begin(), deck.end(), g);
        // dealt_index = 0;     maybe put this in
    }


    std::unique_ptr<Card> Deck::deal() {
        if (deck.empty()) return nullptr;

        return std::move(deck[deal_index++]);
    }
}