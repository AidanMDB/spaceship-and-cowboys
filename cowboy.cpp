#include "cowboy.hpp"

namespace game {

    Cowboy::Cowboy(std::unique_ptr<Card> dealt_card) {
        hand = std::move(dealt_card);
    }

    int Cowboy::guess(Card::Suit suit) {
        if (suit == hand->getSuit()) {
            return hand->getRank();
        }
        return -1;
    }
}