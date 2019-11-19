#pragma once
#include "suit.h"
#include "rank.h"
#include <string>

class Card {
  public: 
    Card(Rank rank, Suit suit);
    Rank getRank() const;
    Suit getSuit() const;
    std::string getName() const;
    
  private:
    const Rank rank;
    const Suit suit;
};

