#include "card.h"
#include "suit.h"
#include "rank.h"
#include <iostream>

Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

Rank Card::getRank() const {
  return this->rank;
}

Suit Card::getSuit() const {
  return this->suit;
}

int main() {
  Card card = Card(Rank::JACK, Suit::CLUBS);
  std::cout << card.getSuit().getName();
}
