#include "card.hpp"


namespace game {
    Card::Card(Rank r, Suit s) : suit(s), rank(r) {}

    Card::Rank Card::getRank() const {
        return rank;
    }

    Card::Suit Card::getSuit() const {
        return suit;
    }
}