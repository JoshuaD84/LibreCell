#pragma once
#include <string>

class Rank {
  public: 
    static const Rank ACE; 
    static const Rank TWO; 
    static const Rank THREE;
    static const Rank FOUR;
    static const Rank FIVE;
    static const Rank SIX; 
    static const Rank SEVEN; 
    static const Rank EIGHT; 
    static const Rank NINE;
    static const Rank TEN; 
    static const Rank JACK;
    static const Rank QUEEN;
    static const Rank KING;

  private:
    const std::string name;
    const int ordinal;

  private:
    Rank(std::string name, int ordinal);

  public:
    std::string getName() const;
};
