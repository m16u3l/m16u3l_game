PROJECT(m16u3l_game)
CMAKE_MINIMUM_REQUIRED(VERSION 3.0.0)

ADD_COMPILE_OPTIONS(-std=c++11)

INCLUDE_DIRECTORIES(include)

ENABLE_TESTING()

SET(src_program 
  source/Main.cpp
  source/Game.cpp
  source/Player.cpp
)

ADD_EXECUTABLE(game ${src_program})