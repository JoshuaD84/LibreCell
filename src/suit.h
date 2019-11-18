#pragma once
#include <string>

class Suit {
  public: 
    static const Suit CLUBS;
    static const Suit DIAMONDS;
    static const Suit HEARTS;
    static const Suit SPADES;

  private:
    const std::string name;

  private:
    explicit Suit(std::string name);

  public:
    std::string getName() const;
};

