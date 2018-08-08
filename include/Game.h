#ifndef _GAME_H_
#define _GAME_H_

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Game
{
  string m_gameName;
  Player *m_gamePlayer;
  int m_enviroment[10][10];

public:
  Game(const string&);
  ~Game();

  void addPlayer(Player*);

  void play();
};

#endif
