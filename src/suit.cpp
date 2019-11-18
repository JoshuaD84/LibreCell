#include "suit.h"
#include <iostream>

Suit::Suit(std::string name) : name(name) {
}

std::string Suit::getName() const { 
   return this->name;
}

const Suit Suit::CLUBS = Suit("Clubs");
const Suit Suit::DIAMONDS = Suit("Diamonds");
const Suit Suit::HEARTS = Suit("Hearts");
const Suit Suit::SPADES = Suit("Spades");

