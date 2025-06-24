#ifndef DECK_HPP
#define DECK_HPP

#include "vector"
#include "memory"
#include "random"
#include "algorithm"
#include "card.hpp"

namespace game {
    class Deck {
        public:
            Deck();
            
            void shuffle();

            std::unique_ptr<Card> deal();

        private:
            std::vector<std::unique_ptr<Card>> deck;
            int deal_index = 0;
    };
}


#endif