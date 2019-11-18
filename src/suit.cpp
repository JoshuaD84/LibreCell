#include "suit.h"

Suit::Suit(std::string name) {
   this->name = name;
}

std::string Suit::getName() {
   return this->name;
}
