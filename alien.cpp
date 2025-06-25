#include "alien.hpp"


namespace game {
    Alien::Alien(int size) {
        spaceship_size = size;
    }


    // might want a place left or right parameter that determines what position to emplace at
    bool Alien::buildSpaceship(int row, std::unique_ptr<Card> card) {
        static int cur_size = 0;

        if (cur_size == spaceship_size) return true;

        if (cur_size > (spaceship_size - 2) && spaceship[0].size() < 2 && row != 0) {
            return false;
        }
        
        spaceship[row].emplace(spaceship[row].begin(), card);
        cur_size++;
        return true;
    }

}