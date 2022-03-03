#ifndef TETRIS_BLOCKS_H_INCLUDED
#define TETRIS_BLOCKS_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <chrono>
#include <thread>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace screens{
    void menuscreen(sf::RenderWindow &window, int highlighted, bool clicking);
    void infoscreen(sf::RenderWindow &window);
    void startscreen(sf::RenderWindow &window);
    void creditscreen(sf::RenderWindow &window);
    int menubuttoncheck(int mousex, int mousey); // 1: Start  2:Info  3:Credits
}


#endif // TETRIS_BLOCKS_H_INCLUDED
