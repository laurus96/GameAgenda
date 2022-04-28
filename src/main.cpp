//
//  main.cpp
//  GameAgenda
//
//  Created by Lorenzo Paolo Cocchinone on 26/04/22.
//

#include <iostream>
#include <fstream>

#include "game.h"


int main(int argc, const char * argv[]) {
    int main_menu = 1;
    
    while(main_menu){

        int choice = 0;
        std::cout << "Scegli cosa vuoi fare: " << std::endl;
        std::cout << "[0] Esci dal programma " << std::endl;
        std::cout << "[1] Inserire un videogioco acquistato;" << std::endl;
        std::cout << "[2] Visualizzare i videogiochi acquistati;" << std::endl;

        std::cin >> choice;
        std::cin.ignore();
    
        switch(choice){
            case 0: {
                main_menu = 0;
                break;
            }

            case 1: {
                std::string title;
                float price;
                std::ofstream wFile;
                
                std::cout << "Inserisci titolo: " << std::endl;
                std::getline(std::cin, title);
                std::cout << "inserisci prezzo: " << std::endl;
                std::cin >>  price;
                std::cin.ignore();

            
                Game insert(title, price, 0);
                //std::ofstream wFile("prova.txt");
                wFile.open("prova.txt", std::ios_base::app);
                wFile << insert.toString();
                if(wFile.fail()){
                    std::cout << "Scrittura fallita!" << std::endl;
                } else {
                    std::cout << "Salvataggio riuscito! " << std::endl;
                }
                wFile.close();
                break;
            }

            case 2: {
                std::string text;

                std::ifstream rFile("prova.txt");
                while(std::getline(rFile, text)){
                    std::cout <<  text;
                }
                rFile.close();
                break;
            }
        }
    }
    return 0;
}
