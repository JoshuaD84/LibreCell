#pragma once
#include <string>
#include <vector>

class Suit {
  public: 
    static const Suit CLUBS;
    static const Suit DIAMONDS;
    static const Suit HEARTS;
    static const Suit SPADES;

  private:
    const std::string name;
    static const std::vector<const Suit*> items;

  private:
    explicit Suit(std::string name);

  public:
    std::string getName() const;
    static const std::vector<const Suit*>& getItems();
};

