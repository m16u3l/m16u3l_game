#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class Player
{
  string m_playerName;
  size_t m_playerLife;
  int m_playerDamage;
  string m_newMove;

public:
  Player(const string&);
  ~Player();

  size_t move();

  string getMove();
};

#endif
