/********************************
*Name: Sanjo Abraham
*Date: 05/31/19
*Description: Header file for Menu/Game functions
********************************/

#ifndef GAME_HPP
#define GAME_HPP
#include <string>
#include "Space.hpp"




class Game{
  private:
    
    int row;
    int col;
    int playerRow;
    int playerCol;
    Space *** space1;

  public:
    
    Game();
    ~Game();
    
    void Initialize();
    
    void Intro();
    
    int MainMenu();
    
    void movePlayer();
    
    void doAction();
    
    void showBoard();
    
    void divider();

    bool isInteger(std::string);
    
//    bool isPositive(int);
    
    int intValidation(int, int);
    
    float floatValidation(float, float);

};
#endif