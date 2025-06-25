#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "card.hpp"
#include "memory"

namespace game {
    class Cowboy {
        public:
            Cowboy(std::unique_ptr<Card> card_dealt);
            int guess(Card::Suit suit);
        private:
            std::unique_ptr<Card> hand;
    };
}

#endif