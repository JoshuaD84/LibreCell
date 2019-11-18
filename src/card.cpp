Card::Card(Suit suit, Rank rank) {
   this->suit = suit;
   this->rank = rank;
}

Card::getRank() {
   return this->rank;
}

Card::getSuit() {
   return this->suit;
}
