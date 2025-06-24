#include "vector"
#include "memory"
#include "card.hpp"

namespace game {
    class Deck {
        public:
            Deck() {
                
            }
            

            void shuffle() {

            }

            Card remove() {
                
            }

        private:
            std::vector<std::unique_ptr<Card>> deck;
    };
}