#ifndef CARD_H
#define CARD_H

class Card {
   public: 
      Card(Suit suit, Rank rank);
      Rank getRank();
      Suit getSuit();
   private:
      Suit suit;
      Rank rank;
}

#endif
