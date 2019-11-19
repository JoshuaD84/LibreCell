#include "card.h"
#include "suit.h"
#include "rank.h"
#include <iostream>
#include <string>

Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

Rank Card::getRank() const {
  return this->rank;
}

Suit Card::getSuit() const {
  return this->suit;
}

std::string Card::getName() const {
  return rank.getName() + " of " + suit.getName();  
}
