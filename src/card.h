#pragma once
#include "suit.h"
#include "rank.h"

class Card {
   public: 
      Card(Rank rank, Suit suit);
      Rank getRank() const;
      Suit getSuit() const;
   private:
      const Rank rank;
      const Suit suit;
};

