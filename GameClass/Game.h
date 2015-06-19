#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class Game
{
    public:
        Game(RenderWindow* window);
        void initialize();
        void update();
        void draw();
        bool isWindowOpen();
    protected:
    private:
        RenderWindow* window;

};
