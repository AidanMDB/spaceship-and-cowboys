#ifndef ALIEN_HPP
#define ALIEN_HPP

#include "vector"
#include "memory"
#include "card.hpp"

namespace game {
    class Alien {
        public:
            Alien(int size) {}

        private:
            int spaceshipSize;
            int row1Size;
            int row2Size;
            int row3Size;
            std::vector<Card> spaceship;
    };
}


#endif