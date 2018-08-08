#include "Game.h"

Game::Game(const string &p_name)
  :m_gameName{p_name}, m_gamePlayer{nullptr}
{
}

Game::~Game()
{
}

void Game::addPlayer(Player *p_player)
{
  m_gamePlayer = p_player;
}

void Game::play()
{
  string m_newMove = "play";
  int n = 10;
  while(n-->0)
  {
    if(m_newMove == "play")
    {
      m_newMove = m_gamePlayer->getMove();
    }
    else
    {
      m_newMove = "play";
    }
  }
}
