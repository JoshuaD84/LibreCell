#pragma once
#include <string>

class Suit {
   public: 
      std::string getName();
      Suit(std::string name);
   private:
      std::string name;
};

