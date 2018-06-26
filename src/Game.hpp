#ifndef GAME_HPP
#define GAME_HPP

#include "GSM.hpp"
#include "Player.hpp"

class Game {
public:
    Game();
    Game(int w_width, int w_height);
    sf::RenderWindow& getContextWindow()    { return *window; }
    float dt;
    int exec();
    void handleEvents();
    void update(float dt);
    void render();
private:
    const int gamewidth;
    const int gameheight;
    sf::RenderWindow* window;
    GSM* gsm;
};

#endif // GAME_HPP
