#include <iostream>
#include "Game.h"
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Game *game = new Game{"newGame"};
  Player *player1 = new Player{"m16u3l"};
  
  game->addPlayer(player1);

  game->play();

  return 0;
}
