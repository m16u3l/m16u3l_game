#include "Player.h"

Player::Player(const string &p_name)
  :m_playerName{p_name}, m_playerLife{100}, m_playerDamage{1}, 
    m_newMove{"play"}
{
}

Player::~Player()
{
}

size_t Player::move()
{
}

string Player::getMove()
{
  cout << "play" << "\n";
  cin >> m_newMove;
  return m_newMove;
}
