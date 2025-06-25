#ifndef ALIEN_HPP
#define ALIEN_HPP

#include "vector"
#include "memory"
#include "card.hpp"

namespace game {
    class Alien {
        public:
            Alien(int total_size);
            bool buildSpaceship(int row, std::unique_ptr<Card> card);
        private:
            int spaceship_size;
            std::vector<std::unique_ptr<Card>> spaceship[3];
    };
}


#endif