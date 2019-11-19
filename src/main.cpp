#include "card.h"
#include <iostream>

int main() {
  Card card = Card(Rank::ACE, Suit::CLUBS);
  std::cout << card.getName() << std::endl;
  
  for(auto const& suitValue : Suit::getItems()) {
    for(auto const& rankValue : Rank::getItems()) {
      std::cout << rankValue->getName() + " of " + suitValue->getName() << std::endl;
    }
  }
}
