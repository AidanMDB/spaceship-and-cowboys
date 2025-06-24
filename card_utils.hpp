#pragma once

#include "card.hpp"
#include "string"
namespace game {
    std::string rankToString(Card::Rank rank) {
        switch (rank) {
            case Card::Rank::Ace: return "Ace";
            case Card::Rank::Two: return "2";
            case Card::Rank::Three: return "3";
            case Card::Rank::Four: return "4";
            case Card::Rank::Five: return "5";
            case Card::Rank::Six: return "6";
            case Card::Rank::Seven: return "7";
            case Card::Rank::Eight: return "8";
            case Card::Rank::Nine: return "9";
            case Card::Rank::Ten: return "10";
            case Card::Rank::Jack: return "Jack";
            case Card::Rank::Queen: return "Queen";
            case Card::Rank::King: return "King";
            default: return "not a rank";
        }
    }

    std::string suitToString(Card::Suit suit) {
        switch(suit) {
            case Card::Suit::Clubs: return "Clubs";
            case Card::Suit::Diamonds: return "Diamonds";
            case Card::Suit::Hearts: return "Hearts";
            case Card::Suit::Spades: return "Spades";
            default: return "not a suit";
        }
    }
}