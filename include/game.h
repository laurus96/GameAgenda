//
//  game.h
//  GameAgenda
//
//  Created by Lorenzo Paolo Cocchinone on 26/04/22.
//

#include <string>

class Game{
    private:
        std::string name_;
        float price_;
        int value_;

    public:
        Game(std::string name, float price, int value);
        void  print_game();
        std::string toString();

};
