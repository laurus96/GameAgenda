#include <iostream>
#include <string>
#include "game.h"

Game::Game(std::string name, float price, int value) : name_(name), price_(price), value_(value) {

}

void Game::print_game(){
    std::cout << "Titolo: " << name_ << std::endl;
    std::cout << "Pagato: " << price_ << std::endl;
    std::cout << "Indice di gradimento: " << value_ << std::endl;
}

std::string Game::toString(){
    return name_ + "-" +  std::to_string(price_)+ "&";
}
