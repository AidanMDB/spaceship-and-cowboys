#ifndef CARD_HPP
#define CARD_HPP

namespace game{
    class Card {
        public:
            enum Suit { Diamond, Hearts, Clubs, Spades };
            enum Rank { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Jack, Queen, King};

            Card(Rank r, Suit s);

            Rank getRank() const;
            Suit getSuit() const;

        private:
            Suit suit;
            Rank rank;
    };
}

#endif CARD_HPP