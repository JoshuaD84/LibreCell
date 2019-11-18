#include "rank.h"
#include <iostream>

Rank::Rank(std::string name, int ordinal) : name(name), ordinal(ordinal) {
}

std::string Rank::getName() const { 
   return name;
}

const Rank Rank::ACE = Rank("Ace", 1);
const Rank Rank::TWO = Rank("Two", 2);
const Rank Rank::THREE = Rank("Three", 3);
const Rank Rank::FOUR = Rank("Four", 4);
const Rank Rank::FIVE = Rank("Five", 5);
const Rank Rank::SIX = Rank("Six", 6);
const Rank Rank::SEVEN = Rank("Seven", 7);
const Rank Rank::EIGHT = Rank("Eight", 8);
const Rank Rank::NINE = Rank("Nine", 9);
const Rank Rank::TEN = Rank("Ten", 10);
const Rank Rank::JACK = Rank("Jack", 11);
const Rank Rank::QUEEN = Rank("Queen", 12);
const Rank Rank::KING = Rank("King", 13);


